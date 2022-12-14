#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start= mid+1;
        }

        else{
            end= mid-1;
        }

        mid= start+(end-start)/2;
    }
    return -1;
}

int main(){
    int odd[5]= {3, 8 , 11 , 14 , 16 };
    int even[6]= {2 , 4 , 6 , 8, 12, 18};
    
    int index =   Binary_search(even ,6 , 12);
    cout<<" The index of 12 is "<<index<<endl;



    return 0;
}