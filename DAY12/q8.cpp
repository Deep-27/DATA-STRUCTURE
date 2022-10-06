#include<bits/stdc++.h>
using namespace std;

// int count2(int n)
//     {
//         int sum=0;
//     for (int i=0; i<n; i++){
//         if (i==2){
//             sum++;
//         }
//     }   return sum;
// }

int main(){

    int n,i;
    cin>>n;
    int sum = 0;
    int check_no =2;
    int array [n];
    for (int i =0; i<n; i++){
        cin>>array[i];
    }
        // cout<<array [i];

    for (int i=0; i<n; i++){
        
      if(check_no == array[i]){
          sum++;
      }
        
    }
    cout<<sum;
    return 0;
}


