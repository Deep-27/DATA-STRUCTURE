
// Euclidean Algorithm: finding GCD;

/*
a = 200;
b = 100;

if a is Greater than b then do a-b;
if b is Greater than a then do b-a;

 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    cout << a << endl;
    return 0;
}