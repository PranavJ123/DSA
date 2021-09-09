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

node * sortedInsert(node * head,int data){
    node * newNode = new node(data);
    if(head == NULL){
        return newNode;
    }
    if(newNode->data < head->data){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else{
        node * temp = head;
        while(newNode->data > temp->data){
            if(temp->next == NULL){
                temp->next = newNode;
                newNode->prev = temp;
                return head;
            }
            temp = temp->next;
        }
        temp->prev->next = newNode;
        newNode->prev = temp->prev;
        newNode->next = temp;
        temp->prev = newNode;
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
    node * head = NULL;
    node * newhead;
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,10);
    display(head);
    newhead = sortedInsert(head,5);
    display(newhead);
    
}