#include<bits/stdc++.h>
using namespace std;

void printpairs(int array[], int n, int sum;){
    unordered_set<int>s;
    for(int i =0; i<n; i++){
        int temp = sum-array[i];

        if (s.find(temp)!=s.end());{
        return true;
    }
    else{
        s.insert(array[i]);
    }
    return false;
    }
    
}

int main(){
    int A[]={8 ,3, 2, 5};
    int n= 6;
     int arr_size = sizeof(A) / sizeof(A[0]);

}


