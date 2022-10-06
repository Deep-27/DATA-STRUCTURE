// Binary Search:
// Time Complexity: O(logn)

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int n, int x){
    int start = 0, end = n-1;
    while(start<=end){
        // int mid = (start+end)/2;
        int mid = start + (end-start) / 2;
        if(array[mid]==x){
            return mid;
        }
        else if(array[mid]<x){
            start = mid+1;
        }
        else{ //array[mid] > x
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    
    return 0;
}