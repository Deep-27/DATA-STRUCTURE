

#include<bits/stdc++.h>
using namespace std;

bool isFibonacci(int n){
    int t1 = 0, t2 = 1;
    if(n==t1 || n==t2){
         return true;
    }
    int nextTerm = t1 + t2;
    while(nextTerm <= n){
        if(nextTerm==n){
            return true;
        }
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1+t2;
    }
    return false;
}

int main()
{
    int n; 
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(isFibonacci(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

