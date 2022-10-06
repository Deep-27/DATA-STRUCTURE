// Searching: 
// Time Complexity: O(n);
// linear search:
#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)
// Linear Search:
bool isPresent(int array[], int n, int element){
    for(int i = 0; i < n; i++){
        if (array[i] == element){
            return true;
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
    int x;
    cin >> x;
    if(isPresent(array, n, x)){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }
}

int32_t main()
{
    decode();
    return 0;
}