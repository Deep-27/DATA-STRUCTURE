#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<int>s; // asie stack create hota hai

    s.push(1); // aise elment insert karte hai 
    s.push(2);
    s.push(3);
    s.pop(); 
    s.push(4);
    s.push(5);

    s.pop();     // aise elment del karte hai 


    cout<<"Top elemnt is "<<s.top()<<endl;  // aise top elemnt print karwate s.top();

    if(s.empty()){                          // aise check karte stack empty hai ki nai 
        cout<<"Stack is empty ";

    }else {
        cout<<"Stack is  not empty ";
    }

    cout<<"Size of Stack is : "<<s.size()<<endl; // aise size pata krte hai stack ka s.size();

    return 0;
}


