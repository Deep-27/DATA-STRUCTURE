#include<bits/stdc++.h>
using namespace std;


bool issqr(int c){
    
    int s= sqrt(c);
    return (s*s==c);
}
bool isFibonacci(int n)
{
    return issqr(5*n*n + 4) ||
           issqr(5*n*n - 4);
}


int main(){
int n;
    cin>>n;
 cout<<isFibonacci(n)<<endl;


    return 0;
}


