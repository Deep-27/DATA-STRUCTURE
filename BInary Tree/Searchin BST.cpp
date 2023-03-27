#include<bits/stdc++.h>
using namespace std;

class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


bool searchInBST(node*root , int x){

    if(root==NULL){
        return false;
    }

    if(root -> data == x){
        return true;
    }

    if(root -> data > x){
        return searchInBST(root->left , x);
    }else {
        return searchInBST(root->right , x);
    }


}

int main(){

    int i;



    return 0;
}


