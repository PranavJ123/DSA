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

node * insertAtTail(node * &head , int val){
    node *n = new node(val);
    if(head == NULL){
        head = n;
        return n;
    }
    node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

node * insertAtHead(node * &head,int val){
    node * n = new node(val);
    n->next = head;
    head = n;
    return head;
}

node * insertion(node* head,int val,int position){
    if(head == NULL){
        return head;
    }
    node * n = new node(val);
    if(position == 0){
        n->next = head;
        head = n;
        return head;
    }
   
        node * temp = head;
        for(int i=0;i<position-1;i++){
                temp = temp->next;
        }
        if(temp!=NULL){
            n->next = temp->next;
            temp->next = n;
        }
        return head;
}

node * deletion(node * &head,int position){
    if(head == NULL){
        return head;
    }
    node *temp = head;
    if(position == 1){
        head = temp->next;
        delete(temp);
        return head;
    }
    
    for(int i=1;temp!=NULL && i<position-1;i++){
        temp = temp->next;
    }
    node * todelete = temp->next;
    temp->next = temp->next->next;
    delete(todelete);
    return head;

}

bool search(node * &head,int key){
    node * temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    head = insertAtTail(head,1);
    head = insertAtTail(head,2);
    head = insertAtTail(head,3);
    display(head);
    head = insertAtHead(head,4);
    display(head);
    cout<<search(head,5)<<endl;
    head = deletion(head,3);
    display(head);
    head = insertion(head,6,2);
    display(head);

}