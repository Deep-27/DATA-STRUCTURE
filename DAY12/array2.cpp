/* 
our task is to rearrange the elements in an order such as all 0's comes first then all 1's.
I/P:
» 13
» 1 0 1 0 0 0 1 0 1 0 1 0 0

O/P:
» 0 0 0 0 0 0 0 0 1 1 1 1 1 


Time Complexity: O(n)

 */

#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(int array[], int n){
    int start = 0;
    for(int i = 0; i < n; i++){
        if(array[i]==0){
            swap(array[i], array[start]);
            start++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    rearrangeArray(array, n);
    for(auto it: array){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}