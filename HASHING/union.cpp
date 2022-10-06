/*
union:
int a[7] = {1, 2, 3, 5, 6, 7, 8};
int b[5] = {3, 5, 6, 7, 8};
s = 1, 2, 3, 5, 6, 7, 8
ans:
7
 */

#include<bits/stdc++.h>
using namespace std;

int unionn(int a[], int b[], int m, int n){
    unordered_set<int>s(a, a+m);
    for(int i=0; i<n; i++){
        s.insert(b[i]);
    }
    return s.size();
}

int main()
{
    int a[7] = {1, 2, 3, 5, 6, 7, 8};
    int b[5] = {3, 5, 6, 7, 8};
    cout << unionn(a, b, 7, 5) << endl;
    return 0;
}