
// Fibonacci Sequence:
// 0 1 1 2 3 5 8 13 21

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t1 = 0, t2 = 1;
    int nextTerm;
    for(int i = 1; i <= n; i++){
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
    return 0;
}