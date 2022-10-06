#include<bits/stdc++.h>
using namespace std;




void Reverse(char NAME[], int n){
    int s=0;
    int e= n-1;

    while(s<=e){
        swap(NAME[s++], NAME[e--]);
    }
}


int GetSize( char NAME[]){
    int count =0;
    for(int i =0; NAME[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char NAME[20];
    cout<<"Enter your name here :"<<endl;

    cin>>NAME;
    cout<<"Your name is ";
    cout<<NAME<<endl;   
    int len = GetSize(NAME);
    cout<<"Size "<<GetSize(NAME)<<endl;

    Reverse(NAME, len);
    cout<<"Your name is ";
    cout<<NAME<<endl;  


    return 0;
}


