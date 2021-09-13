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
        cout<<"list is empty";
    }
    else{
        cout<<top->data<<endl;
    }
}

int pop(){
    node * temp=top;
    if(top==NULL){
        return -1;
    }
    else{
        int popele=top->data;
        top=top->next;
        delete temp;
        return popele;
    }

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
    // push(10);
    // display();
    // peek();
    cout<<pop()<<" ";
    push(4);
    // push(5);
    cout<<pop();    
    // peek();
    // display();
}