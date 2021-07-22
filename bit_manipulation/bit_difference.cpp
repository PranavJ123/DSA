#include<iostream>
using namespace std;

int bitDifference(int a , int b){
    int xorsum;
    int count =0;
    xorsum = a ^ b;

    while(xorsum){
        xorsum = xorsum & xorsum-1;
        count ++;
    }
    return count;
}

int main(){
    cout<<bitDifference(20,25);
}