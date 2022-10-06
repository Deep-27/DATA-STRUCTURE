// our task is to find armstrong numbers between 1 and n;

#include<bits/stdc++.h>
using namespace std;
void isArmstrong(){
    int n;
    cin>>n;
    int temp=n;
    int digits =log10(n)+1;
    int res =0;
    while (n>0){
        int last = n%10;
        res += pow(last, digits);
        n/=10;
    }
    if (temp==res ){
        cout<<"armstrong no."<<endl;
    }
    else{
        cout<< "not armstrong"<<endl;
    }
    
}

int main()
{
    isArmstrong();
    
    return 0;
}