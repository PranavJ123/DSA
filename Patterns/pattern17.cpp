//Pascal's triangle
#include<iostream>
using namespace std;
int main(){
    int num,coef=1;
    cout<<"Enter the number of rows:";
    cin>>num;
    for(int i=0;i<num;i++){
        for(int space =0;space<(num-i);space++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(i==0 || j==0){
                coef=1;
            }
            else{
                coef = coef*(i-j+1)/j;
            }
            cout<<coef<<" ";
        } 
        cout<<endl;
    }
}