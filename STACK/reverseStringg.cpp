#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "Pranjal";

    stack<char>deep;

    for (int i=0; i<str.length(); i++){
        char ch = str[i];
        deep.push(ch);
    }

    string ans = "";

    while(!deep.empty()){
        char ch = deep.top();
        ans = ans + ch;
        deep.pop();
    }

    cout<<"Answer is : "<<ans<<endl;


    return 0;
}


