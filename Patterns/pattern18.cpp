//Hollow butterfly pattern
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of rows:";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
            int space = 2*num-2*i;
            for(int j=1;j<=space;j++){
                cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=num;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
            int space = 2*num-2*i;
            for(int j=1;j<=space;j++){
                cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}