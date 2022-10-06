// / 1 + (1*2) + (1*2*3) + (1*2*3*4) + (1*2*....*n);
// 1 + 2! + 3! + 4! + ...... + n!;

// 3 = 1*2*3;
// 5 = 1*2*3*4*5;
// n = 1*2*3*4*5*.....*n;
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += factorial(i);
    }
    cout << sum << endl;
    return 0;
}