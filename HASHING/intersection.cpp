int a[7] = {1, 2, 3, 5, 6, 7, 8};
int b[5] = {3, 5, 6, 7, 8};
  
ans:
5
 */

#include<bits/stdc++.h>
using namespace std;

int intersectionn(int a[], int b[], int m, int n){
    unordered_set<int>s(a, a+m);
    int count = 0;
    for(int i=0; i < n; i++){
        if(s.find(b[i]) != s.end()){
            count++;
            s.erase(b[i]);
        }
    }
    return count;
}

int main()
{
    int a[7] = {1, 2, 3, 5, 6, 7, 8};
    int b[5] = {3, 5, 6, 7, 8};
    cout << intersectionn(a, b, 7, 5) << endl;
    return 0;
}