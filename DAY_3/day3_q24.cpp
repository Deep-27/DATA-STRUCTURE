#include<bits/stdc++.h>
using namespace std;

int main(){

    int i , n;
    cout<<" eneter the number : ";
    cin>>n;

    int sum=0;

    for (int  i = 0; i < n; i++)    
    {
        if (i%2!=0){
            sum+=i;
        }
    }
    
    cout<<"sum : "<<sum<<endl;




    return 0;
}


