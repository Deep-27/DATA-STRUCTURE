#include<bits/stdc++.h>
using namespace std;
int main()
{
int a = 3, b = 4, c = 3, d = 4, x, y;
x = (a=5) && (b=7);
y = (c=5) || (d=8);
cout << x << " " << y << endl;
x = (a==6) && (b=9);
y = (c==6) || (d=10);
cout << x << " " << y << endl;
return 0;
}