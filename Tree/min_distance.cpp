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

node * lca(node * root,int n1,int n2)
{
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    node * leftLca = lca(root->left,n1,n2);
    node * rightLca = lca(root->right,n1,n2);
    if(leftLca!=NULL && rightLca != NULL){
        return root;
    }
    if(leftLca == NULL && rightLca == NULL){
        return NULL;
    }
    if(leftLca != NULL){
        return leftLca;
    }
    return rightLca;
}

int findDistance(node * root,int k , int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data == k){
        return dist;
    }
    int left = findDistance(root->left,k,dist+1);
    int right = findDistance(root->right,k,dist+1);
    if(left!=-1){
        return left;
    }
    return right;
}

int min_distance(node * root,int n1,int n2){
    node * LCA = lca(root,n1,n2);
    int d1 = findDistance(LCA,n1,0);
    int d2 = findDistance(LCA,n2,0);
    return d1+d2;
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(7);
    cout<<min_distance(root,4,7);
}