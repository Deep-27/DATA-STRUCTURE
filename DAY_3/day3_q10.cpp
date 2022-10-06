// Write a c++ program to find all the factors of a given
// number n. and then find the sum of all the factors and
// also multiply separately.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int i , n;
    cout<<" enter the number :  ";
    cin>>n;
     int temp  ;

    int sum =0;
    int product= 1;

    for (int i = 1; i <=n; i++)
    {
        if  (n%i==0){
            cout<<i<<endl;
            int temp = i;
            
            sum+=i;
            product *=temp;
        }
        
        
        cout<<"sum : "<<sum<<endl;
        cout<<"product :  "<<product<<endl;



    }
  
    return 0;
}


