#include<iostream>
using namespace std;

int findPosition(int N){
    if(N && !(N & N-1)){
        int setbit = 0;
        int pos = 0;
        while(setbit!=1){
            setbit = N & 1;
            pos++;
            N = N>>1;
        }
        return pos;
    }
    else{
        return -1;
    }
}

int main(){
    cout<<findPosition(5);
}