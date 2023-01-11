#include<bits/stdc++.h>
using namespace std;

void SortPush(stack<int>&s, int num){
    if(s.empty()|| s.top()<num){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();

    SortPush(s, num);
    s.push(n);
}

void SortStack(stack<int>&st){
    if(st.empty()){
        return;
    }
        int num = st.top();
        st.pop();
        SortStack(st);

        SortPush(st, num);
}

int main(){

    int i;
    int size;
    cin>>size;
    stack<int>sta;
    for(int i=0; i<size; i++){
        int num;
        cin>>num;
        sta.push(num);
    }

    SortStack(sta);

    while(!sta.empty()){
        cout<<sta.top()<<" ";
        sta.pop();
    }


    return 0;
}


