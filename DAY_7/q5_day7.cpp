#include<bits/stdc++.h>
using namespace std;
int apala_diff(int a, int b)
{
int diff = a-b;
return diff;
}
int komal_mul(int a, int b)
{
int multiply = a*b;
return multiply;
}
int32_t main()
{
int n;
cin >> n;
while(n--){
int num1, num2;
cin >> num1 >> num2;
if (num1 > num2)
{
cout << apala_diff(num1, num2) << endl;
}
else if (num1 < num2)
{
cout << komal_mul(num1, num2) << endl;
}
}
return 0;
}