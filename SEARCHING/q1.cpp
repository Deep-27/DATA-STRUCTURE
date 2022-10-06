// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
// First and Last Position of an Element In Sorted Array

// Sample Input 1:
// 2
// 6 3
// 0 5 5 6 6 6
// 8 2
// 0 0 1 1 2 2 2 2

// Sample Output 1:
// -1 -1 
// 4 7


#include<bits/stdc++.h>
using namespace std;

int firstOccu(int arr[], int n, int k) {
    // sort(arr, arr+n);
    int start=0;
    int end= n-1;
    int mid = start+(end-start)/2;
    int ans= -1;

    while(start<=end){
        //k =7
        if(k==arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if (k>arr[mid]){
            start= mid+1;

        }
        else if(k<arr[mid]){
            end= mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
   int lastOccu(int arr[], int n , int k){
    int start=0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans= -1;

    while(start<=end){
        if(k==arr[mid]){
            ans = mid;
            start= mid+1;
        }
        else if(k>arr[mid]){
            start= mid+1;
        }
        else if(k<arr[mid]){
            end= mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
 }

 int main(){

    int even[8]= {0, 0, 1, 1, 2, 2 ,2, 2};
    cout<< " "<<firstOccu(even , 8 ,2);
    cout<<" "<<lastOccu(even , 8, 2)<<endl;
    return 0;

 }
