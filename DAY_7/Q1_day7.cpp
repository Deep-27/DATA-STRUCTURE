#include <bits/stdc++.h>
using namespace std;
int add(int a, int b, int c) {
return (a + b + c);
}
int main() {
int a, b, c;
cin >> a >> b >> c ;
int sum;
sum = add(a, b, c);
cout << "sum of a, b and c is " << sum << endl;
return 0;
}