/*
    check whether a number is palindrome or not.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while(n!=0){
        int last = n%10;
        rev = rev*10+last;
        n/=10;
    }
    if(temp == rev){
        cout << "It's a Palindrome" << endl;
    }
    else{
        cout << "It's not a Palindrome" << endl;
    }
    return 0;
}