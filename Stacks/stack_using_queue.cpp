#include<iostream>
#include<queue>
using namespace std;

class stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    stack(){
        N=0;
    }
    void push(int val){
        q1.push(val);
        N++;
    }

    int pop(){
        if(q1.empty()){
            return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int del = q1.front();
        q1.pop();
        N--;
        queue<int> temp = q1;
        q1=q2;
        q2 = temp;
        return del;
    }

    int size(){
        return N;
    }

    bool isEmpty(){
        if(q1.empty()){
            return true;
        }
        return false;
    }
    int top(){
        if(q1.empty()){
            return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);
        queue<int> temp = q1;
        q1=q2;
        q2=q1;
        return ans;
    }
};

int main(){
    stack st;
    st.push(1);
    // st.push(2);
    // st.push(3);
    // cout<<st.pop()<<endl;
    // st.push(4);
    // cout<<st.pop()<<endl;
    // cout<<st.top()<<endl;
    // cout<<st.size()<<endl;
    cout<<st.isEmpty()<<endl;
}