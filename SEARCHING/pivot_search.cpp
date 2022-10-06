#include<bits/stdc++.h>
using namespace std;



int pivotsearch(int arr[], int n){
    int s= 0;
    int e= n-1;
     int mid=  s+(e-s)/2;

     while(s<e){
        if(arr[mid]>=arr[0]){
            s= mid+1;
        }else {
            e =mid;
        }
        mid = s+(e-s)/2;
     }
     return s;
}

int main(){

    int arr[7]= {2 ,4, 5 ,6 ,8 ,9 ,1};
    cout<<"Pivot of this arr "<<pivotsearch(arr, 7)<<endl;
    


    return 0;
}


