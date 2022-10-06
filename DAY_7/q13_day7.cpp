// Q.) Write a function in a c++ program that is designed in
// such a way:
// if any n, 1 <= n <= 15 :
// Print “LESSER THAN 15”
// else if n>15:
// If it is odd, print ODD
// If it is even, print EVEN
// INPUT:
// 12
// 17
// OUTPUT:
// LESSER THAN 15
// ODD

#include<bits/stdc++.h>
using namespace std;


void checkno(int n){
    if (n>0; n<=15){
        cout<<"LESSER THAN 15 "<<endl;
    } if (n>15)
    {
         if (n%2==0)
         {
             cout<<"EVEN"<<endl;
         }else cout<<"ODD"<<endl;
        
        
    }
    
}

int main(){

    int n;
    cin>>n;
    checkno(n);



    return 0;
}


