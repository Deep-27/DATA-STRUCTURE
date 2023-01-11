#include<bits/stdc++.h>
using namespace std;


void sOlve(stack<int>&s, int x){
    if(s.empty()){
        s.pop();
        return;
    }
    
    int Num = s.top();
    s.pop();

    sOlve(s, x);
    s.push(Num);

}

void inserttttt(stack<int>&st, int x){
    sOlve(st, x);
}

// int main(){

//     int i;
//     int x;
//     cin>>x;
//     stack<int>st;
//     int N;
//     cin>>N;
//     for(i=0; i<N; i++){
//         int num;
//         cin>>num;
//         st.push(num);
//     }
    
   

//    inserttttt(st,  x);
    
//       while (!st.empty())
//     {
//         int p=st.top();
//         st.pop();
//         cout << p << " ";
//     }

//     return 0;
// }


