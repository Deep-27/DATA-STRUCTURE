// https://leetcode.com/problems/merge-sorted-array/


//  Merge Sorted Array

//  Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]






#include<bits/stdc++.h>
using namespace std;


void merge(int arr1[], int n , int arr2[], int m,int arr3[] ){
    int i=0,  j=0;
    int k =0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }

}

void print(int ans[], int n){
    for(int i =0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[5]={1 ,2,5,6,8};
    int arr2[4]= {3,4,7,9};
    int arr3[8]= {0};

    merge(arr1, 5 , arr2, 4, arr3);
    print(arr3, 8);



    return 0;
}


