#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element) {
    //basecase
    if(s.empty()) {
        s.push(element);
          return ;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    insertAtBottom(s, element);
    
    s.push(num);
}

void reverseStack(stack<int> &stack) {
      //base case
    if(stack.empty()) {
        return ;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call
    reverseStack(stack);
    
    insertAtBottom(stack,num);
}
int main(){

    int i;
    stack<int>st;
    int N;
    cin>>N;
    for(i=0; i<N; i++){
        int num;
        cin>>num;
        st.push(num);
    }
    
   

   reverseStack(st);
    
      while (!st.empty())
    {
        int p=st.top();
        st.pop();
        cout << p << " ";
    }

    return 0;
}


