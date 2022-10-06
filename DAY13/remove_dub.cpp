//Our task is to remove duplicates from an array:
// size-->9;
// 1 2 2 3 4 4 5 6 6; -->elements
// O/P:- 1 2 3 4 5 6
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int array[], int n){
    int res = 1;
    for(int i = 1; i < n; i++){
        if(array[i]!=array[res-1]){
            array[res] = array[i];
            res++;
        }
    }
    return res;
}

int main()
{
    /* 
    int array[9] = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    int k = removeDuplicates(array, 9);
    for(int i = 0; i < k; i++){
        cout << array[i] << " ";
    }
    cout << endl; 
    
    */


    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    n = removeDuplicates(array, n);
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}