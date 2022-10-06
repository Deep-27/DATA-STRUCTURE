#include <bits/stdc++.h>
using namespace std;
int diff(int a, int b) {
return (a - b);
}
int main() {
int a, b;
cin >> a >> b;
int difference ;
difference = diff(a, b);
cout << "sum of a and b is " << difference << endl;
return 0;
}