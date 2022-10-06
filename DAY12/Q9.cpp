#include<bits/stdc++.h>
using namespace std;

int isAdd(int array[], int n ){
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += array[i];
    }
    return sum;
}

int isProduct(int array[], int n){
    cin>>n;
    int product =1;
    for(int i =0; i<n; i++){
        product*= array[i];
    }
    return product;
}

int main(){

    int n, i;
    cin>>n;
    int array[n];
    for(i=0; i<n; i++){
        cin>>array[i];

    }
    for (i=0; i<n; i++){
       array[i];
    }

    cout<<isProduct(array ,n)<<endl;
    cout<<isAdd(array , n);


    return 0;
}


