// Write a c++ program to check whether an entered year is a Leap year or
// not.

#include<bits/stdc++.h>
using namespace std;

int main(){

        int a ;
        cout<<"Enter Year :";
        cin>>a;

        if (a%4==0 && a%100!=100)
            if (a%400==0)
            cout<<"This year is leap year";
            else
            cout<<" Not a leap year";



    return 0;
}