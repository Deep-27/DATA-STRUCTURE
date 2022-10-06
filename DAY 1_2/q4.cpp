/*
Write a program to convert temperature in degree Celsius to
Fahrenheit
*/


#include<bits/stdc++.h>
using namespace std;

int main (){
    float F , c ,    b , d;
    d=32;
    b= 1.8;

    cout<<"Celcius : "<<endl;
    cin>>c;

    F = (c *b)+d;

    cout<<"Fahrenheit : "<<F<<endl;

    return 0;




    

}