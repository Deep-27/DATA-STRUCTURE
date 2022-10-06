// Q2. 1+3+5+7+9+......................N terms

#include<bits/stdc++.h>
using namespace std;

void naturalSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if (i%2!=0){
         sum+=i;
        cout<<sum<<endl;
        }
    }
    // return sum;
}

int main()
{
    int n;
  
    cin >> n;
    naturalSum(n);
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     if(i%2!=0){
    //     sum += i;
    //     }
    // }
    // cout << sum << endl;
    return 0;
}

