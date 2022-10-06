
// Method 1: finding prime number:
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for(int i = 2; i < n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}