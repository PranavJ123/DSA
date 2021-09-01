//Palindromic pattern
#include<iostream>
using namespace std;
int main(){
    int num,i,j,k;
    cout<<"Enter the number of rows:";
    cin>>num;
    for(i=1;i<=num;i++){
        for(k=num;k>=i;k--){
            cout<<"  ";
        }
        for(j=i;j>0;j--){
            cout<<j<<" ";
        }
        for(j=2 ; j<=i;j++){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
}