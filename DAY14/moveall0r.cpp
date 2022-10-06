/* 
move all zeroes to left....
Input:
1 0 0 1 1 0 1 0 1 0 0 1 0

Output:
0 0 0 0 0 0 0 1 1 1 1 1 1
 */


#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void moveAllZeroes(int array[], int n){
    int start = 0;
    for(int i = 0; i < n; i++){
        if(array[i] == 0){
            swap(array[i], array[start++]);
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
    
}

int32_t main()
{
    decode();
    return 0;
}