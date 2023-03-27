#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int>q;
    q.push(21);
    q.push(22);
    q.push(23);
    q.push(24);
    q.push(25);
    q.push(26);
    q.push(27);
    q.push(28);

    cout<<q.size()<<endl;
    // cout<<q.back()<<endl;


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}


