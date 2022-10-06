/* 
move all zeroes to end....
Input:
1 0 0 1 1 0 1 0 1 0 0 1 0

Output:
1 1 1 1 1 1 0 0 0 0 0 0 0

*/


#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void moveAllZeroes(int array[], int n){
    int end= n-1;
    for(int i =  n-1; i>=0; i--){
        if(array[i] == 0){
            swap(array[i], array[end--]);
        }
    }
}

void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    moveAllZeroes(array, n);
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    decode();
    return 0;
}