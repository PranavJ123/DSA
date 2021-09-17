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

void insertAtTail(node * &head,int data){
    node * newnode = new node(data);
    if(head==NULL){
        head = newnode;
        return;
    }
    node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=newnode;
}

node * sortedInsert(node * &head,int data){
    node * newnode = new node(data);
    if(head ==NULL){
        
        return newnode;

    }
    if(newnode->data < head->data){
        newnode->next = head;
        head = newnode;
        return head;
    }
    else{
        node * temp = head;
        while(temp->next!=NULL && newnode->data > temp->next->data){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}

void display(node * head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node * head=NULL;
    insertAtTail(head,25);
    insertAtTail(head,36);
    insertAtTail(head,47);
    insertAtTail(head,58);
    insertAtTail(head,69);
    insertAtTail(head,80);
    display(head);
    node * n;
    n = sortedInsert(head,50);
    display(head);
}