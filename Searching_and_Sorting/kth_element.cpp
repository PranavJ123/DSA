#include<iostream>
using namespace std;

int kthElement(int A[], int B[], int m,int n, int k_req)
{
    int k = 0, i = 0, j = 0;
 
    
    while(i < m && j < n)
    {
        if(A[i] < B[j])
        {
            k++;
            if(k == k_req)
                return A[i];
            i++;
        }
        else
        {
            k++;
            if(k == k_req)
                return B[j];
            j++;
        }
    }
 
    while(i < m)
    {
        k++;
        if(k == k_req)
            return A[i];
        i++;
    }
    while(j < n)
    {
        k++;
        if(k == k_req)
            return B[j];
        j++;
    }
}


int main(){
    int arr1[5] = {100, 112, 256, 349, 770};
    int arr2[6] = {12,78,23,89,45,56};
    int k=9;
    int n=6,m=5;
    cout<<find(arr1,arr2,n,m,k);
}
