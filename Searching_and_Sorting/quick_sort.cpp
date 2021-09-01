#include<iostream>
using namespace std;

int partition(int arr[],int low , int high){
    int pivot = arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}

void quickSort(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,size-1);
    cout<<"Sorted array is:";
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}