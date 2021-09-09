#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node * prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node * &head,int val){
    node * n = new node(val);
    n->next = head;
    if(head!=NULL){
    head->prev = n;
    }
    head=n;
}

node * reverseDLL(node * &head){
    node * temp = NULL;
    node * currentptr = head;
    while(currentptr!=NULL){
        currentptr->prev = currentptr->next;
        currentptr->next = temp;
        temp = currentptr;
        currentptr = currentptr->prev;
    }
    head = temp;
    return head;
}

void insertAtTail(node * &head,int val){
    node * n = new node(val);
    if(head == NULL){
        insertAtHead(head,val);
        return;
    }
    node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
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
    node * head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    head = reverseDLL(head);
    display(head);
}