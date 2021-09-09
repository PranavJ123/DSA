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



node * sortedMerge(node * head1 , node * head2){
    node * ptr1 = head1;
    node * ptr2 = head2;
    node * res = NULL;
    node * ptr3 = NULL;

    while(ptr1!= NULL && ptr2!= NULL){
        if(ptr1->data < ptr2->data){
            ptr3 = ptr1->next;
            ptr1->next = res;
            res = ptr1;
            ptr1 = ptr3;
        }
        else{
           ptr3 = ptr2->next;
           ptr2->next = res;
           res = ptr2;
           ptr2 = ptr3;
        }
    }
    while(ptr1!=NULL){
            ptr3 = ptr1->next;
            ptr1->next = res;
            res = ptr1;
            ptr1 = ptr3;
    }
    
    while(ptr2!=NULL){
           ptr3 = ptr2->next;
           ptr2->next = res;
           res = ptr2;
           ptr2 = ptr3;
    }
    return res;
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
    node * headres = NULL;
    node * heada = NULL;
    node * headb = NULL;

    insertAtTail(heada,5);
    insertAtTail(heada,10);
    insertAtTail(heada,15);
    insertAtTail(heada,40);

    insertAtTail(headb,2);
    insertAtTail(headb,3);
    insertAtTail(headb,20);

    display(heada);
    display(headb);

    headres = sortedMerge(heada,headb);
    display(headres);
}