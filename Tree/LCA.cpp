#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node * right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

node * lca(node * root,int n1,int n2,int n3){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2 ||root->data == n3){
        return root;
    }
    node * leftLCA = lca(root->left,n1,n2,n3);
    node * rightLCA = lca(root->right,n1,n2,n3);
    if(leftLCA!=NULL && rightLCA!=NULL){
        return root;
    }
    if(leftLCA == NULL && rightLCA == NULL){
        return NULL;
    }
    if(leftLCA != NULL){
        return leftLCA;
    }
    return rightLCA;
}

int main(){
    node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    int n1 = 7;
    int n2 = 6;
    int n3 = 5;
    node * LCA = lca(root,n1,n2,n3);
    if(LCA == NULL){
        cout<<"Lowest common ancestor not exist"<<endl;
    }
    else{
        cout<<LCA->data<<endl;
    }
}