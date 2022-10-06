#include<bits/stdc++.h>
using namespace std;

int main(){

    int i , n ;
    cout<<"Write the nubers :  ";
    cin>>n;
    int sum=0;
    i=1;

    while (i<=n)    
    {
        sum+=i;
        i++;
    }
    
    cout<<sum<<" "<<endl;
    return 0;
}


