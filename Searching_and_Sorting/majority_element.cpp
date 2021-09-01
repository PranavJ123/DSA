//Moore's Voting Algorithm

#include<iostream>
using namespace std;

int findCandidate(int a[],int size){
    int maj_element=0;
    int count = 1;
    for(int i=1;i<size;i++){
        if(a[maj_element] == a[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            maj_element = i;
            count=1;
        }
    }
    return a[maj_element];
}

bool isMajority(int a[],int size,int cand){
    int count =0;
    for(int i=0;i<size;i++){
        if(a[i] == cand){
            count++;
        } 
    }
    if(count>size/2){
        return true;
    }
    return false;
}

int majorityElement(int a[],int size){
  int cand = findCandidate(a,size);
  if(isMajority(a,size,cand)){
      return cand;
  }
  else{
      return -1;
  }
}

int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int a[size];
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<majorityElement(a,size);
    return 0;
}