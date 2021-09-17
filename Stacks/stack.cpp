#include<iostream>
using namespace std;
#define n 100

class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return 0;
        }
        return arr[top--];
    }
    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top==-1) {
            return true;
        }
        return false;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.pop()<<endl;
    // cout<<st.Top()<<endl;
    // cout<<st.pop()<<endl;
    // cout<<st.pop()<<endl;
    // cout<<st.pop()<<endl;
    cout<<st.isEmpty();
}