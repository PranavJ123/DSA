#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next = NULL;
    }
};

void insertAtTail(node* &head , int val){
    node * n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

int GetNth(node * head,int index){
    node * temp = head;

    for(int i=1;temp->next!=NULL && i<index;i++){
        temp=temp->next;
    }
    return temp->data;
}

void display(node * head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node * head = NULL;
    insertAtTail(head,8);
    insertAtTail(head,7);
    insertAtTail(head,10);
    insertAtTail(head,8);
    insertAtTail(head,6);
    insertAtTail(head,1);
    insertAtTail(head,20);
    insertAtTail(head,91);
    insertAtTail(head,21);
    insertAtTail(head,2);
    display(head);
    int index = 2;
    cout<<GetNth(head,index);
}