#include<bits/stdc++.h>
using namespace std;

class Queue{

    int *arr;
    int qfront;
    int rear;
    int size;

    public:
    Queue(int size){
        size = 1001;
        arr= new int[size];
        qfront = -1;
        rear = -1;
    }

    bool enQueue(int element){
       if((qfront==0 && rear == size-1 ) || (rear==(qfront-1)%(size-1))){
            return false;
        }else if (qfront==-1){
            qfront=rear=0;
        }else if(rear==size-1 && qfront !=0){
            rear=0;
        }else {
            rear++;
        }
        arr[rear]=element;
        return true;
    }


     int dequeue(){
       if(qfront==-1){
            return -1;
        }
        int ans = arr[qfront];
        arr[qfront]=-1;
        if(qfront==rear){
            qfront=rear=-1;
        }else if(qfront==size-1){
            qfront=0;
        }else {
            qfront++;
            
        }
        return ans;
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
};

int main(){

     Queue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.dequeue();
    q.dequeue();
    q.enQueue(6);


    // cout<<q.front()<<endl;

    for(int i=0;i<=5;i++){
        cout<<q.front()<<endl;
        q.dequeue();
    }


    return 0;
}


