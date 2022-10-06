// Q. No. 5
// Write a C++ program to find the maximum and minimum element in an
// array(sized n).

#include<bits/stdc++.h>
using namespace std;

int firstLargest(int array [] ,int n){
    int maxxi = INT_MIN;
    for(int i =0; i<n; i++){
         maxxi = max(maxxi, array[i]);
    }
    return maxxi;
}

int firstMinimum(int array [], int n){
    int minni = INT_MAX;
     for (int i =0; i<n; i++){
         minni = min(minni , array[i]);
     }
     return minni;
}


int main()
{

    int n;
    cin>>n;
    int  array[n];
    int first=firstLargest(array , n);

     for (int i=0; i<n; i++){
         cin>>array[i];
     }
      
     cout << firstMinimum(array , n);
     cout << " " <<firstLargest(array, n) << endl;
    
      



    return 0;
}


