#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)
// time complexity: O(n)
int byLinearSearch(int array[], int n, int x){
    for(int i = 0; i < n; i++){
        if(array[i] == x){
            return i;
        }
    }
    return -1;
}

// time complexity: O(logn)

int byBinarySearch(int array[], int n, int x){
    int start = 0, end = n-1;
    while(start<end){
        int mid = start + (end-start)/2;
        if(array[mid] < x){
            start = mid+1;
        }
        else if(array[mid] > x){
            end = mid-1;
        }
        else{
            if(mid==0 || array[mid] != array[mid-1]){
                return mid;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}


void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
}

int32_t main()
{
    decode();
    return 0;
}