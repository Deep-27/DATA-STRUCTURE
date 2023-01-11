#include<bits/stdc++.h>
using namespace std;

class node{
    Public:
        int data;
        node* left;
        node* right;


        node(int d){
            this->data= d;
            this->left=NULL;
            this->right=NULL;
        }
};

node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root= new node (data);

    if (data==-1){
        reutrn NULL;
    }

    cout<<"Enter the data for inserting in left of "<<data<<endl;
    this->left= buildTree(this->left);
    cout<<"Enter the data for inserting in right of "<<data<<endl;
    this->right= buildTree(this->right);
    return root;
    
}
  


int main(){

    int i;
    node* root = NULL;
    root = buildTree(root);



    return 0;
}


