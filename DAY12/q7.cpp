#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int odd=0;
    int even = 0;
    cin>>n;
    int array [n];

    for(int i =-0; i<n; i++){
        cin>>array[i];
    }

    for(int i =0; i<n; i++){
        if(i%2==0){
            // cout<<i;
            cout<<" "<<array[i];
            even++;
        } 
        else 
            // cout<<i;
            
             
            odd++;
            

    }
        cout<<endl;
        cout<<odd<<endl;
        
        cout<<even;


    return 0;
}


