/* 
#include<bits/stdc++.h>
using namespace std;

int naturalSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += naturalSum(i);
    }
    cout << sum << endl;
    return 0;
}
 */

// QUESTION 14:
/* 
#include<bits/stdc++.h>
using namespace std;

double fact(double n){
    double factorial = 1;
    for(double i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main()
{
    double n;
    cin >> n;
    double sum = 0;
    for(double i = 1; i <= n; i++){
        sum += 2/fact(i);
    }
    cout << sum << endl;
    return 0;
}
 */



/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double sum = 0;
    for(double i = 1; i <= n; i++){
        sum += 2/pow(i, i);
    }
    cout << sum << endl;
    return 0;
}

 */