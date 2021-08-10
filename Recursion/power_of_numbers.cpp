#include<iostream>

using namespace std;

long long power(int N,int R){
    if(R == 0){
        return 1;
    }

    long long prevPower = power(N,R-1);
    return (N*prevPower)%1000000007;
}

int main(){
    cout<<"Enter any number";
    int n , rem , reverse=0;
    cin>>n;
    int temp = n;
    while(n != 0){
        rem = n % 10;
        reverse = reverse*10 + rem;
        n = n/10;
    }
    cout<<reverse<<endl;
    cout<<power(temp,reverse);
}