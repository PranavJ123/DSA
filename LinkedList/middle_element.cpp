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

int size(node * head){
    node * temp=head;
    int count =0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

int getMiddle(node * head){
    node * temp=head;
    int n = size(head)/2;

    if(size(head)==1){
        return head->data;
    }
   

    for(int i=1;i<n;i++){
        temp = temp->next;
    }
    return temp->next->data;
    
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
    insertAtTail(head,2);
    // insertAtTail(head,4);
    // insertAtTail(head,6);
    // insertAtTail(head,7);
    // insertAtTail(head,5);
    // insertAtTail(head,1);
    cout<<size(head)<<endl;
    cout<<getMiddle(head);
}