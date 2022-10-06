/* 
Palindromic Array:
Our task is to check whether all the elements of the array is palindrome or not.

TEST CASE-1:

» 5
» 121 111 1331 101 555

» O/P: True

TEST CASE-2:

» 3
» 121 333 388

O/P: False
 */

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n;
    int rev = 0;
    while(n!=0){
        int last = n%10;
        rev = rev*10+last;
        n/=10;
    }
    if(temp==rev){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(isPalindrome(array[i])==false){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    return 0;
}