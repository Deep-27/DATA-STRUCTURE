// Q1. 1+2+3+4+5+………………….N terms



#include<bits/stdc++.h>
using namespace std;

int naturalSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}