#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*  next;
    Node* prev;

    //constructor

    Node(int d){    
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

};
// transversing or priniting thr linkedlist
void print (Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp=  temp -> next;
    }
    cout<<endl;

}
// length of the Linked List    
int getlen(Node* head){
    int len =0;
     Node* temp = head;
    while(temp!=NULL){
        len++;
        temp=  temp -> next;
    }
   return len;
}
void insertAthead(Node* &head , int d){

    if (head==NULL){
        Node* temp = new Node(d);
        head = temp;

    }else {
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}
void insertAttail(Node * &tail, int d){

    if(tail==NULL){
        Node* temp = new Node(d);
        tail= temp;

    }
    else {
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp; 
    }

}
void insertAtanyPosi(Node* &tail , Node* &head, int position , int d){
    if (position==1){
        insertAthead(head , d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

     while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }

     if(temp -> next== NULL){
        insertAttail(tail, d);
        return;
    }

    Node* nodeToinsert = new Node(d);

    nodeToinsert -> next  = temp -> next;
    temp -> next -> prev = nodeToinsert;
    temp -> next = nodeToinsert;
    nodeToinsert -> prev = temp;
}

int main(){

    int i;
    Node* node1 = new Node(10);
    Node * head  = node1;
    Node* tail = node1;


    print(head);
    cout<<getlen(head)<<endl;

    insertAthead(head , 11);
    print(head);

    insertAttail(tail, 7);
    print(head);

    insertAtanyPosi(tail , head , 3 , 9);
    print(head);

    return 0;
}


