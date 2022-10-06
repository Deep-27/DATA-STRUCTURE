// Search in an infinite sized array:\
x = 80

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int binarySearch(int array[], int start, int end, int x){
    while(start < end){
        int mid = start + (end-start)/2;
        if(array[mid]==x){
            return mid;
        }
        else if(array[mid] > x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

// a[] = {1, 10, 15, 20, (30), 40, 50, 60, (70), 100, 150, .............};\
x = 50;

int searchhh(int array[], int x){
    if(array[0] == x){
        return 0;
    }
    int i = 1;
    while(array[i] < x){
        i = i*2;
    }
    return binarySearch(array, i/2+1, i-1, x);
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
    int x;
    cin >> x;
    cout << searchhh(array, x) << endl;
}

int32_t main()
{
    decode();
    return 0;
}