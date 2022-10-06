// Write a C++ program to sort an Unsorted array.(in ascending order)

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    sort(array, array+n);
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }



    return 0;
}


