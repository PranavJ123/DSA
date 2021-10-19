#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};



int size(struct node * root){
    if(root==NULL){
        return 0;
    }
    int lsize = size(root->left);
    int rsize = size(root->right);
    return lsize+rsize+1
}

int main(){
    struct node* root = new node(1);
     root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout<<size(root);
    
}