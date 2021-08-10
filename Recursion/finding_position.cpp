#include<iostream>
using namespace std;

long long int nthPosition(long long int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return 2*nthPosition (n/2);
}

int main(){
    cout<<nthPosition(9);
}