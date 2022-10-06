// 1 2 3 4 4 7 7 6 6 9 8 7 6 5 4
// (4, 7) =» 7

// 1 2 3 5 7 9 4 6 8
// (3, 2) =» 3

// 1 3 5 7 9
// » 1

// 2 4 6 8
// » 1


// Maximum length of odd-even subarray.
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int maxLenOddEvenSubArray(int array[], int n){
    int count = 1, maxxi = 1;
    for(int i = 1; i < n; i++){
        if((array[i]%2!=0 && array[i-1]%2==0) || (array[i]%2==0 && array[i-1]%2!=0)){
            count++;
            maxxi = max(count, maxxi);
        }
        else{
            count = 1;
        }
    }
    return maxxi;
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
    cout << maxLenOddEvenSubArray(array, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}