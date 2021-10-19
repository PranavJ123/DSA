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

vector<int> sumAtK(struct node * root, int k){
    vector<int> res;
    if(root==NULL){
        return res;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while(!q.empty()){
        struct node * newnode = q.front();
        q.pop();
        if(newnode!=NULL){
            if(level==k){
                res.push_back(newnode->data);
            }
            if(newnode->left){
                q.push(newnode->left);
            }
            if(newnode->right){
                q.push(newnode->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return res;
}

int main(){
    struct node * root = new node(3);
    vector<int> level;
    root->left = new node(2);
    // root->right = new node (3);
    // root->left->left = new node(4);
    root->left->right = new node(1);
    root->left->right->left = new node(5);
    root->left->right->right = new node(3);
    // root->right->left = new node(6);
    // root->right->right = new node(7);
    level = sumAtK(root,3);
    for(int i=0;i<level.size();i++){
        cout<<level[i]<<" ";
    }

}