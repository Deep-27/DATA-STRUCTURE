#include<bits/stdc++.h>
using namespace std;


class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;

    public: 
    Queue(int size){
        size=100001;
        arr =new int [size];
        qfront = 0;
         rear = 0;

    }
    

    void enQueue(int element){
        if(rear==size){
            cout<<"Queue Overflow"<<endl;
        }else{
            arr[rear]=element;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front(){
        if(qfront==rear)
        {
           return -1;
        }else
        {
            return arr[qfront];
        }
    }

    bool isEmpty(){
        if(qfront==rear){
            return true;
        }else{
            return false;
        }
    }


};

int main(){

    Queue q(5);

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.dequeue();

    cout<<q.front()<<endl;



    return 0;
}


