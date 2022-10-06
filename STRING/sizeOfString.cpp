#include<bits/stdc++.h>
using namespace std;


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
    cout<<"Size "<<GetSize(NAME)<<endl;


    return 0;
}


