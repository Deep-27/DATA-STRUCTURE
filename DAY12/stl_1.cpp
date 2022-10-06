/* 
I/P:
» 13
» 1 0 1 0 0 0 1 0 1 0 1 0 0

O/P:
» 0 0 0 0 0 0 0 0 1 1 1 1 1 

our task is to rearrange the elements in an order such as all 0's comes first then all 1's.

Time Complexity: O(nlogn)

 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    sort(array, array + n);

    for(auto it : array){
        cout << it << " "; 
    }
    cout << "\n\n";

/* 
int a = 90;
cout << a << " ";

a = 999;
cout << a << " ";

a = 700;
cout << a << " ";

 */

    return 0;
}