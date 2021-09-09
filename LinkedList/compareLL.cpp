#include<iostream>
using namespace std;

class node{
    public:
    char data;
    node* next;
    node(char val){
        data=val;
        next = NULL;
    }
};

void insertAtTail(node* &head , char val){
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
int compare_lists(node * head1,node * head2){
    while(head1->next !=NULL && head2->next!=NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if(head1->next!=NULL || head2->next!=NULL){
        return -1;
    }
    return 0;
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


    insertAtTail(heada,'a');
    insertAtTail(heada,'a');
    insertAtTail(heada,'b'); 
    insertAtTail(heada,'b'); 
    insertAtTail(headb,'a');
    insertAtTail(headb,'a');
    insertAtTail(headb,'b'); 
    

    display(heada);
    display(headb);
    cout<<compare_lists(heada,headb);
}