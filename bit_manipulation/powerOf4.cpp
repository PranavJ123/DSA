#include<iostream>
using namespace std;

bool isPowerOfFour(int num){
    return (num && !(num & num-1) && (num-1)%3==0);
}
int main(){
    cout<<isPowerOfFour(100);
}