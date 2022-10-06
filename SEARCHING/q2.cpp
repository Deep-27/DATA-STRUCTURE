// Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-index-in-a-mountain-array/

// Input: arr = [0,2,1,0]
// Output: 1

#include<bits/stdc++h>
using namsespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int s=0;
    int e= arr.size();
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s= mid+1;
        }
        else {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
