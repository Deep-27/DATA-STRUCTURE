/*
    first & last digit of a number:
    n = 153
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lastDigit = n%10;
    while(n>=10){
        n/=10;
    }
    int firstDigit = n;
    cout << firstDigit << " " << lastDigit << endl;
    cout<< firstDigit + lastDigit <<endl;
    return 0;
}