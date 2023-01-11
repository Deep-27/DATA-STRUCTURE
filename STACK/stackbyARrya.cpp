#include<bits/stdc++.h>
using namespace std;



class Stack{

  public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr =new int [size];
        top = -1;

    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]= element;

        }else{
            cout<<"Stack Overflow"<<endl;
        }

    }


    void pOp(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }

    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }

    }

};

int main() {

    Stack st(5);
    
    st.push(7);
    st.push(0);
    st.push(5);

    cout<< st.peek()<<endl;

    return 0;
}


