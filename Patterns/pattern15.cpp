//Zig-Zag pattern
#include<iostream>
using namespace std;
int main(){
    int stars,i,j;
    cout<<"Enter the number of stars:";
    cin>>stars;
    for(i=1;i<=3;i++){
        for(j=1;j<=stars;j++){
            if(((i+j)%4==0) || ((i==2) && (j%4==0))){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}