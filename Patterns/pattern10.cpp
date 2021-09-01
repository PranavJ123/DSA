//Rhombus pattern
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of rows:";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=num;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}