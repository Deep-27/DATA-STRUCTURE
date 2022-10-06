// merge two sorted arrays in a sorted manner.

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void mergee(int a[], int b[], int m, int n){
    int i = 0, j = 0;
    while(i < m && j < n){
        if(a[i] <= b[j]){
            cout << a[i++] << " ";
        }
        else{
            cout << b[j++] << " ";
        }
    }
    while(i < m){
        cout << a[i++] << " ";
    }
    while(j < n){
        cout << b[j++] << " ";
    }
}

void decode()
{
    speedy;
    int a[7] = {1, 2, 3, 5, 6, 7, 8};
    int b[5] = {3, 5, 6, 7, 8};
    mergee(a, b, 7, 5);
}

int32_t main()
{
    decode();
    return 0;
}