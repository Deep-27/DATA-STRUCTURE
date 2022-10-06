
#include<bits/stdc++.h>
using namespace std;

void saurabh(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow(i, 3);
    }
    cout << sum << endl;
}

int main()
{
    saurabh();
    return 0;
}