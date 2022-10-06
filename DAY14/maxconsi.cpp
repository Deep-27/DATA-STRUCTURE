// max Consecutive Ones:

// 1 1 0 0 1 1 1 0 0 1 1
// 3

#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int array[], int n){
    int res = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(array[i] == 1){
            count++;
            res = max(res, count);
        }
        else{
            count = 0;
        }
    }
    return res;
}

void decode()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << maxConsecutiveOnes(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}