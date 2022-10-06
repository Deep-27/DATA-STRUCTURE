// Our task is to find whether an array is sorted or not
// 1 2 3 7 5; -- unsorted:

// 1 2 3 5 7; -- sorted:

// check whether an Array is sorted or not.
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int array[], int n){
    for(int i = 1; i < n; i++){
        if(array[i]<array[i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    if(isSorted(array, n)){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    return 0;
}