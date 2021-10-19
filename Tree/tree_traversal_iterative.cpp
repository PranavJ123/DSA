#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct node * root){
    if(root==NULL){
        return;
    }
    stack<node*>st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        cout<<root->data<<" ";
        st.pop();

        if(root->right){
            st.push(root->right);
        }
        if(root->left){
            st.push(root->left);
        }
    }
}

void inorder(struct node * root){
    if(root==NULL){
        return;
    }
    stack<node*> st;
    struct node * curr = root;
    while(curr!=NULL || st.empty()==false){
        while(curr!=NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

void postorder(struct node * root){
    if(root==NULL){
        return;
    }
    stack<node*> s1,s2;
    s1.push(root);
    struct node * curr;
    while(!s1.empty()){
        curr = s1.top();
        s1.pop();
        s2.push(curr);
        if(curr->left){
            s1.push(curr->left);
        }
        if(curr->right){
            s1.push(curr->right);
        }
    }
    while(!s2.empty()){
        curr = s2.top();
        s2.pop();
        cout<<curr->data<<" ";
    }
}
int main(){
    struct node * root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right= new node(7);
    // preorder(root);
    // inorder(root);
    postorder(root);
}