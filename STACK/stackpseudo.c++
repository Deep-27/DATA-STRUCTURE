#include<bits/stdc++.h>
using namespace std;

void print(stack<int> s){
    // if(s.empty()){
    //     return;
    // }

    // int x = s.top();
     cout<<"Stack Elements are : ";
    while(!s.empty()){
        
         cout<<s.top()<<" ";
         
        s.pop();
        
    }
   
    
}


int main(){

    stack<int>pd;

    pd.push(7);
    pd.push(0);
    pd.push(0);
    pd.push(4);
    pd.pop();
    pd.push(1);
    pd.push(6);
    pd.push(3);
    pd.pop();
    pd.push(1);
    pd.push(8);
    pd.push(0);
    pd.pop();
    


    cout<<"top Elements are : "<<pd.top();
    cout<<endl;
    

    if(pd.empty()){
        cout<<"Stack is khali";
    }else{
        cout<<"Stack is not khali";
    }
    cout<<endl;


    print(pd);



    return 0;
}



