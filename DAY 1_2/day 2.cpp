/*  
//age - int type:

age>18 print "eligible for driving"
age<18 print "not eligible for driving"
age==18 Print "eligible for driving but not more than 30Km/h";

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if(age>18){
        cout << "eligible for driving" << endl;
    }
    else if(age < 18){
        cout << "not eligible for driving" << endl;
    }
    else {
        cout << "eligible for driving but not more than 30Km/h speed" << endl;
    }
    return 0;
}


/* 

n - input:
1 <= n <= 3
n==1 print "ONE"
n==2 print "TWO"
n==3 print "THREE"

n > 3 print "Greater than 3"
n < 1 print "Less than 1"
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>=1 && n<=3){
        if(n==1){
            cout << "ONE" << endl;
        }
        else if(n==2){
            cout << "TWO" << endl;
        }
else{
            cout << "THREE" << endl;
        }
    }
    else if(n > 3){
        cout << "Greater than 3" << endl;
    }
    else if(n<1){
        cout << "Less than 1" << endl;
    }
    return 0;
}
