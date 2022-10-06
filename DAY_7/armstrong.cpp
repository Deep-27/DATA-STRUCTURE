/* 
Find all armstrong numbers between two intervals:

 */

#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int temp = n;
    int sum = 0;
    while(n!=0){
        int last = n%10;
        sum += pow(last, 3);
        n/=10;
    }
    if(sum==temp){
        return true;
    }
    return false;
}


int main()
{

    for(int i = 100; i <= 999; i++){
        if (isArmstrong(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}