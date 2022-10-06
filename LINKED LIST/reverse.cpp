#include<bits/stdc++.h>
using namespace std;



class Node{
    public : 
    int data;
    Node* prev;
    Node* next;


    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;

    }

};

void print (Node* head ){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAthead(Node* &head ,int d){
    if(head==NULL){
    Node* temp = new Node(d);
    head = temp;
    }else {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAttail(Node* &tail, int d){
    if(tail==NULL){
        Node* temp  = new Node(d);
        tail=temp;
    }else {
        Node*temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}
int  reverseTheLl(Node* &head, int d){  // going to revrse the function
    if(head== NULL || head-> next == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    
    Node * prev = NULL;
    Node * curr = head;
    while (curr!=NULL){
        Node* forward =  curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    cout<<prev;
}

int main(){

    int i;



    return 0;
}


