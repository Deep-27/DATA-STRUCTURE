/*
Types of Functions:
Function with no argument and no return type.
Function with no argument but a return type.
Function with argument but no return type.
Function with argument and return type.

 */


#include<bits/stdc++.h>
using namespace std;

// Function with no argument and no return type.
void fun1(){
    cout << "Hello World!" << endl;
}

// Function with no argument but a return type.

int fun2(){
    int a = 100;
    return a+100;
}

// Function with argument but no return type.
void fun3(int a, int b){
    cout << a+b << endl;
}

// Function with argument and return type.

// TESTCASE-1:
int fun4(int a, int b){
    return a*b;
}

// TESTCASE-2:
int fun5(int a, int b, int c){
    int maxxi = max(a, max(b, c));
    return maxxi;
}

int main()
{
    // fun1(); // fun 1 called
    // cout << fun2() << endl; // fun2 called
    // int a, b;
    // cin >> a >> b;
    // fun3(a, b); // fun3 called

    // int a, b;
    // cin >> a >> b;
    // cout << fun4(a, b) << endl; // fun4 called

    // int x, y, z; //
    // cin >> x >> y >> z;

    // cout << fun5(x, y, z) << endl; // fun5 called

    return 0;
}