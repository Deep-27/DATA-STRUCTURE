// Q.) Write a function in c++ program to find the minimum
// and maximum of two numbers.

 #include<bits/stdc++.h>
 using namespace std;




 int  maxii(int a ,int b){
     return max(a,b);
 }
 int mini (int a , int b){
     return min(a, b);
 }

 
 int32_t main(){
 
     int a , b;
     cin>>a>>b;

        cout<< "max : "<<max(a,b) <<endl;
       cout<<  "min : "<<min(a,b) <<endl;
 
 
     return 0;
 }
 
 
 