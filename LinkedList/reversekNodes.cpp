#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head,int val){
    node * n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

node * reversekNodes(node * &head,int k){
    node * prevptr = NULL;
    node * currentptr = head;
    node * nextptr;
    int count =0;
    while(currentptr!= NULL && count<k){
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next = reversekNodes(nextptr,k);
    }
    return prevptr;
}

void display(node * head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node * head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    int k=3;
    node * newhead = reversekNodes(head,k);
    display(newhead);
}