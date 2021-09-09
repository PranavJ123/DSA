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

void deleteAtHead(node * &head){
    node * todelete = head;
    head = head->next;
    head->prev = NULL;
}

node * deletion(node * &head ,int position){
    if(position == 1){
        deleteAtHead(head);
        return head;
    }
    node * temp = head;
    int count=1;
    while(temp!=NULL && count!=position){
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL){
     temp->next->prev = temp->prev;
    }
    delete temp;
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
    node * head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,5);
    display(head);
    head = deletion(head,1);
    display(head);
}