#include<iostream>
using namespace std;


    getBit(int num , int pos){
        return ((num & (1<<pos))!=0);
    }

    setBit(int num , int pos){
        return (num | (1<<pos));
    }
    clearBit(int num , int pos){
        int mask = ~(1<<pos);
        return (num & mask);
    }
    updateBit(int num , int pos, int value){
        int mask = ~(1<<pos);
        num = (num & mask);
        return (num | (value<<pos));
    }
int main(){
    cout<<getBit(10,2)<<endl;
    // cout<<setBit(10,2);
    // cout<<clearBit(10,1);
    // cout<<updateBit(10,1,0);
}