#include<iostream>
using namespace std;

bool isPowerOfTwo(int num){
    return (num && !(num & num-1));
}
int main(){
    cout<<isPowerOfTwo(8);
}