#include<iostream>
using namespace std;

int countSetBits(int n){
    int count =0;
    while(n){
        n = n & n-1;
        count++;
    }
    return count;
}

int main(){
    cout<<countSetBits(15)<<endl;
}
