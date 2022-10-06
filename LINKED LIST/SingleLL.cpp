#include<bits/stdc++.h>
using namespace std;


class Node{

    public:
    int data;
    Node* next;

    //constructor 
    Node(int data){
        this -> data =data;
        this -> next= NULL;
    }

    //destructor
    ~Node(){
        int value= this -> data;

        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value <<endl;
    }


};

void insertAtHead(Node* &head, int d){ // insertng node in the head
    Node*temp =new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAttail(Node* &tail, int d){ // instering node in the tail
    Node*temp= new Node(d);
    tail ->next = temp;
    tail = temp;
}

void insertAtposition(Node* &tail , Node* &head , int position, int d  ){ // inserting node anywhere
    // inserting the node in head or first position
    if(position==1){
        insertAtHead(head, d);
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
    
    Node* nodeToInsert =  new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(int position, Node* &head){
    
    //delete 1st or front node
    if(position==1){
        Node*temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }else{ // deleting node from middle orr last
        Node* curr = head;
        Node* prev =  NULL;
        int cnt = 1;
         while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
         }
         prev ->next = curr -> next;
         curr-> next = NULL;
         delete curr;



    }
}
    // print the linked list
void print (Node* &head){
    Node* temp = head;
     
     while(temp!= NULL){
        cout<<temp -> data<< " ";
        temp=  temp ->next;
     }
     cout<<endl;
}

int main(){

    Node* node1= new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl; 

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head , 8);
    print(head);

    insertAttail(tail, 19);
    print(head);

    insertAtposition(tail, head, 3, 17);
    print(head);

    insertAtposition(tail, head, 1, 7);
    print(head);


    insertAtposition(tail,head,  6, 21);
    print(head);

    cout<<"head "<<head -> data<<endl;
    cout<<"tail "<<tail -> data<<endl;

    deleteNode(1 , head);
    print(head);

    insertAttail(tail, 50);
    print(head);


    return 0;
}


