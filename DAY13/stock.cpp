/* 
Stock Buy and sell Problem:

1 5 3 8 12

»13
*/
#include<bits/stdc++.h>
using namespace std;

int stockBuySell(int array[], int n){
    int profit = 0;
    for(int i = 1; i < n; i++){
        if(array[i] > array[i-1]){
            profit += (array[i] - array[i-1]);
        }
    }
    return profit;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << stockBuySell(array, n) << endl;
    return 0;
}