#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct node{
    int data;
    struct node * left;
    struct node * right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> levelOrder(struct node * root){
    vector<int> res;
    if (root==NULL){
        return res;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        struct node * newnode = q.front();
        q.pop();
        if(newnode!=NULL){
            res.push_back(newnode->data);
            if(newnode->left){
                q.push(newnode->left);
            }
            if(newnode->right){
                q.push(newnode->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    return res;
}

int main(){
    struct node* root = new node(1);
    vector<int> result;
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    result = levelOrder(root);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    } 
}