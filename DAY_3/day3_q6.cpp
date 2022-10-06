#include<bits/stdc++.h>
using namespace std;

int main(){

    int i ,n ;
    cin>>n;

    int factorial = 1;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        factorial= factorial *i;
        sum +=factorial;

    
    }
    
    cout<<sum<<" "<<endl; 


    return 0;
}


