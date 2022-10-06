#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n){
 int i= 2;
 while (n>=i){
     if (n%i==0)
        return false;

        n= n-(n/i);
        i++;
 }
 return true;
 }
 

