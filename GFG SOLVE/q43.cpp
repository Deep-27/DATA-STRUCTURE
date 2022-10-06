#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool cheak(int n){
        
        if(n==1 || n==0){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
	int fullPrime(int N){
	    //code 
	    int rem=0;
	      if(cheak(N)==false){
	        return false;
	    }
	    while(N>0){
	        rem=N%10;
	        if(cheak(rem)==false){
	            return 0;
	        }
	        N/=10;
	    }
	  
	    return 1;
	}
};