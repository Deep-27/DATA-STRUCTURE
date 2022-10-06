/*
    reverse a number:
    n = 153
    O/P: 351
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;//153
    int rev = 0;
    while(n>0){
        int last = n%10;//1
        rev = rev*10+last;//351
        n/=10; // 153/10 = 15/10 = 1/10 = 0
    }
    cout << rev << endl;
    return 0;
}