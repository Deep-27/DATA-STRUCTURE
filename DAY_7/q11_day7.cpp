// Q.) Write a function in the c++ program to check whether
// the number entered by the user is odd or even number.

#include<bits/stdc++.h>
using namespace std;
bool checkEven(int n)
    {
    if(n%2==0){
        return true;
    }
    return false;
}


int main(){

    int n;
    bool isEven;

    cin>>n;
    isEven= checkEven(n);
    if(isEven){
        cout<<n<<"no. is even"<<endl;
    }else
        cout<<n<<"no. is odd"<<endl;



    return 0;
}


