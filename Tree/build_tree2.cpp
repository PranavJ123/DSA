#include<iostream>
using namespace std;

struct node{
    int data;
    node * left;
    node * right;
    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

struct node * buildTree(int postorder[],int inorder[],int start,int end){
    if(start>end){
        return NULL;
    }
    static int idx = end;
    int curr = postorder[idx];
    idx--;
    struct node * newnode = new node(curr);
    if(start==end){
        return newnode;
    }
    int pos = search(inorder,start,end,curr);
    newnode->right = buildTree(postorder,inorder,pos+1,end);
    newnode->left = buildTree(postorder,inorder,start,pos-1);
    return newnode;

}

void inorderDisplay(node * root){
    if(root==NULL){
        return;
    }
    inorderDisplay(root->left);
    cout<<root->data<<" ";
    inorderDisplay(root->right);
}

int main(){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    node * root = buildTree(postorder,inorder,0,4);
    inorderDisplay(root);
}