#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool flag = true;

    for (int i =2 ; i<= sqrt(n); i++){
        if (n%i==0){
            flag = false;
            break;
        }
    }
    if (flag){
        cout<<" prime number "<<endl;
    }
        else{
        cout<<"not a prime number"<<endl;

        }

    

    return 0;
}


