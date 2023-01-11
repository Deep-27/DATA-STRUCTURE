#include<bits/stdc++.h>
using namespace std;


void sOlve(stack<int>&input, int count, int Size){
    if(count==Size/2){
        input.pop();
        return;
    }
    
    int Num = input.top();
    input.pop();

    sOlve(input, count+1, Size);
    input.push(Num);

}

void deleteMid(stack<int>&input, int N){
    int count=0;
    sOlve(input, count, N);
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
    
   

    deleteMid(st,  N);
    
      while (!st.empty())
    {
        int p=st.top();
        st.pop();
        cout << p << " ";
    }

    return 0;
}


