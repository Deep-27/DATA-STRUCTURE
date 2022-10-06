#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void intersection(int a[], int b[], int m, int n){
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
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

void decode()
{
    speedy;
    int a[8] = {13, 5, 10, 10, 10, 15, 15, 20};
    int b[5] = {5, 10, 10, 15, 30};
    sort(a, a+8);
    sort(b, b+5);
    intersection(a, b, 8, 5);
}

int32_t main()
{
    decode();
    return 0;
}