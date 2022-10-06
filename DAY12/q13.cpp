// // Write a C++ program to print odd and even numbers of an array of integers.
// In such a way that even numbers would come first, and then odd numbers

#include<bits/stdc++.h>
using namespace std;

int isOdd(int array[],int  n){
    cin>>n;
    for(int i=0; i<n; i++){
        if(i%2!=0){
            cout<<array[i];
            
        }
    }   return 0;
}

int isEven(int array[], int n){
    cin>>n;

    for(int i=0; i<n; i++){
        if(i%2==0){
        cout<<array[i];
        
        }
    } return 0;
}

int main(){

    int n;
    cin>>n;
    int array[n];
    for(int i =0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
        array[i];
    }
    cout<<endl;
    cout<<isEven(array ,n)<<" ";
    cout<<isOdd(array, n)<<" ";



    return 0;
}


