#include<iostream>
#include<vector>
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

node* solve(node* head, int n) {
    vector<int> even, odd;
    node* ptr = head;
    while(ptr != NULL) {
        int d = ptr->data;
        if((d%2) == 0) even.push_back(d);
        else odd.push_back(d);
        ptr = ptr->next;
    }
    ptr = head;
    for(int i: even) {
        ptr->data = i;
        ptr = ptr->next;
    }
    for(int i: odd) {
        ptr->data = i;
        ptr = ptr->next;
    }
    return head;
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


    // insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtTail(head,3);
    
    insertAtTail(head,5);
    insertAtTail(head,7);
    // insertAtTail(head,2);
    // insertAtTail(head,4);
    // insertAtTail(head,6);
    display(head);
    // segregateNode(head);
    head = solve(head, 20);
    display(head);
}