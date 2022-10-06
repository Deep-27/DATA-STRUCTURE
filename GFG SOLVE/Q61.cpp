// https://practice.geeksforgeeks.org/problems/sum-palindrome3857/1

#include<bits/stdc++.h>
using namespace std;

class Solution {

 long long reverse(long long n){
    long long int d=0, n1=0;
    while(n){
        d=n%10;
        n=n/10;
        n1= n1*10+d;
    }
    return n1;
}

 long long isSumPalindrome(long long n){
    long long int n1= n;
    for(int i=0; i<=5; i++){
        if(n1==reverse(n1)){
            return n1;
        }
        else {
            n1 += reverse(n1);
        }
    }
    return -1;
  } 
};

int main(){
    int t;
    cin>>t;
    while(--t){
        long long n; 
        cin>>n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}



