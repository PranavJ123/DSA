#include<iostream>
#include <cmath>
using namespace std;

int answer(int n){
    if(n==0){
        return 0;
    }
    int i;
    for(i = 0 ; i < n ; i++){
        if(pow(2,i)>n){
            break;
        }
    }
    int x = i-1;
    return pow(2,x-1)*x + (n-pow(2,x)+1) + answer(n-pow(2,x));
}

int main(){
    cout<<answer(17)<<endl;
}