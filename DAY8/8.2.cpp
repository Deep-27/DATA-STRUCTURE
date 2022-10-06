// (1*1*1) + (2*2*2) + (3*3*3) + (4*4*4) + ... + (n*n*n);
// (1^3) + (2^3) + (3^3) + (4^3) + ... + (n^3);

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow(i, 3);
    }
    cout << sum << endl;
    return 0;
}