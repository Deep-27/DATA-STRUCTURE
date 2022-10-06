// Find pairs in sorted array:
// 1 2 3 4 5 6 7
// sum = 9
// O/P: YES;

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

bool isPairpresent(int array[], int n, int sum){
    int start = 0, end = n-1;
    while(start <= end){
        if(array[start] + array[end] == sum){
            return true;
        }
        else if (array[start] + array[end] < sum){
            start++;
        }
        else{
            end--;
        }
    }
    return false;
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
    int sum;
    cin >> sum;
    if(isPairpresent(array, n, sum)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main()
{
    decode();
    return 0;
}