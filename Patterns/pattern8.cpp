//Inverted half pyramid using numbers
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of rows:";
    cin>>num;
    for(int i=num;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}