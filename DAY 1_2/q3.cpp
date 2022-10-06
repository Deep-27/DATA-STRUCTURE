/*
Write a c++ program to find Simple Interest
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

        float si, p, r, t;
         cout <<" principe : "<<endl;
         cin>>p;

         cout<<"rate :"<<endl;
         cin>>r;

         cout<<"time : "<<endl;
         cin>>t;

         si = (p*r*t)/100;   //Simple intrest formula 

         cout<<"si ="<<si<<endl;



    return 0;
}


