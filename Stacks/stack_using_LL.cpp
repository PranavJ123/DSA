#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int val){
        data = val;
        next = NULL;
    }
};
node * top;
void push(int val){
    node * newnode = new node(val);
    newnode->data = val;
    newnode->next=top;
    top=newnode;
}

int peek(){
    if(top==NULL){
        // cout<<"list is empty";
        return -1;
    }
    else{
        // cout<<top->data<<endl;
        return top->data;
    }
}

bool isEmpty(){
    if(top== NULL){
        return true;
    }
    return false;
}

void pop(){
    node * temp=top;
    if(top==NULL){
        // return -1;
       return;
    }
    else{
        // int popele=top->data;
        // cout<<top->data;
        top=top->next;
        delete temp;
        // return popele;
    }

}

int getCount()
{
    int count = 0; 
    node* current = top; 
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

void display(){
    node * temp=top;
    if(temp==NULL){
        cout<<"list is empty";
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main(){
    push(2);
    push(3);
    push(10);
    display();
    cout<<peek();
    pop();
    // push(4);
    // push(5);
    // cout<<pop();    
    // peek();
    // display();
    // cout<<isEmpty();
    cout<<getCount();
}