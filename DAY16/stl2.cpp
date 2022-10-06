// sorting:
// possible optimised time complexity: nlogn - STL sort();

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

void decode()
{
    speedy;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    // sorting elements in ascending order:
    // sort(array, array+n);
    // for(auto it: array){
    //     cout << it << " ";
    // }
    // cout << endl;
    // sorting elements in ascending order:
    // Method-1:
    // sort(array, array+n);
    // reverse(array, array+n);
    // for(auto it: array){
    //     cout << it << " ";
    // }
    // cout << endl;

    // Method-2:
    // sort(array, array+n, greater<int>());
    // for(auto it : array) {
    //     cout << it << " ";
    // }
    // cout << endl;
}

int32_t main()
{
    decode();
    return 0;
}