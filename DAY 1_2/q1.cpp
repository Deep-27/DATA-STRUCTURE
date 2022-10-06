/*
write a c++ program to take 2 numbers as input and print the addition,
multiplication, division, remainder, the quotient of those 2 numbers"
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cout<<" a and b"<<endl;
    cin>>a>>b;

    int sum= a+b;
    int multip = a*b;
    int division = a/b;
    int reminder= a%b;
    
    cout<<sum<<multip<<division<<reminder<< "quotine = "<<division<<endl;
    return 0;
}


