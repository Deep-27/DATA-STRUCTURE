
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int originalN = n;
    int digits = log10(n)+1;
    int res = 0;
    while(n>0){
        int last = n%10;
        res += pow(last, digits);
        n/=10;
    }
    if(originalN == res){
        cout << "It's an Armstrong Number" << endl;
    }
    else{
        cout << "It's not an Armstrong Number" << endl;
    }
    return 0;
}