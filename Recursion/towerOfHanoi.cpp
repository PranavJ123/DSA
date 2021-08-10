#include<iostream>
using namespace std;
long long count=0;

long long toh(int N, int from, int to, int aux) {
    
    if(N == 1){
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    count++;
    return count;
    
    }
    toh(N-1,from,aux,to);
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    count++;
    toh(N-1,aux,to,from);
    return count;

}

int main(){
    cout<<toh(2,1,3,2);
}