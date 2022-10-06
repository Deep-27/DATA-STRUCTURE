/*
Union of tow arrays:
a[] = {13, 5, 10, 10, 10, 15, 15, 20};
b[] = {5, 10, 10, 15, 30}

ans = ;

*/

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void unionnn(int a[], int b[], int m, int n){
    int i = 0, j = 0;
    while(i<m && j<n){
        if(i > 0 && a[i] == a[i-1]){
            i++;
            continue;
        }
        if(j > 0 && b[j] == b[j-1]){
            j++; 
            continue;
        }
        if(a[i] < b[j]){
            cout << a[i++] << " ";
        }
        else if(a[i] > b[j]){
            cout << b[j++] << " ";
        }
        else{
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    while(i<m){
        if(i > 0 && a[i] != a[i-1]){
            cout << a[i++] << " ";
        }
    }

    while(j<n){
        if (j > 0 && b[j] != b[j - 1])
            cout << b[j++] << " ";
    }
}

void decode()
{
    speedy;
    int a[8] = {13, 5, 10, 10, 10, 15, 15, 20};
    int b[5] = {5, 10, 10, 15, 30};
    sort(a, a+8);
    sort(b, b+5);
    unionnn(a, b, 8, 5);
}

int32_t main()
{
    decode();
    return 0;
}