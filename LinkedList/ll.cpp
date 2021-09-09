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

void insertAtTail(node * &head , int val){
    node *n = new node(val);
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

void insertAtHead(node * &head,int val){
    node * n = new node(val);
    n->next = head;
    head = n;
}

void insertion(node* head,int val,int position){
    if(head == NULL){
        return;
    }
    node * n = new node(val);
    if(position == 0){
        n->next = head;
        head = n;
    }
   
        node * temp = head;
        for(int i=0;i<position-1;i++){
                temp = temp->next;
        }
        if(temp!=NULL){
            n->next = temp->next;
            temp->next = n;
        }
}

void reversedList(node * &head){
    node * prevptr = NULL;
    node * currentptr = head;
    node * nextptr ;

    while(currentptr!=NULL){
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
    }
    head = prevptr;

    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node * head,int key){
    node * temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node *&head){
    node * todelete = head;
    head = head->next;
    delete(todelete);
}

void deleteAtTail(node *&head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
    }
    node * temp = head;
    while(temp->next->next!= NULL){
        temp = temp->next;
    }
    node * todelete = temp->next;
    temp->next = NULL;
    delete(todelete);
}

void deletion(node * &head, int val){

    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
    }
    node *temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node * todelete = temp->next;
    temp->next = temp->next->next;
    delete(todelete);
}



void display(node * head){
    node * temp = head;
    while(temp != NULL){
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
    display(head);
    // insertAtHead(head,4);
    // display(head);
    cout<<search(head,5)<<endl;
    // deletion(head,2);
    // deleteAtHead(head);
    // display(head);
    // deleteAtTail(head);
    // display(head);
    // insertion(head,6,2);
    // display(head);
    reversedList(head);
}