#include<iostream>
using namespace std;

int middle(int A,int B , int C){
    if(B<=A && B>=C || B>=A && B<=C) return B;
    else if(C<=B  && C>=A || C>=B && C<=A) return C;
    else return A;
}

int main(){

int A ,B,C;
cin>>A>>B>>C;
cout<<middle(A,B,C);
return 0;
}