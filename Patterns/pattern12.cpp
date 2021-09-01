//Pyramid pattern
#include<iostream>
using namespace std;
int main(){
    int num,space;
    cout<<"Enter the number of rows:";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(space =i;space<num;space++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}