#include<iostream>
#include<algorithm>
using namespace std;

	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   int i=0,j=0,k=0;
       while(i<n && j<m){
           if(a[i] < b[j]){
               res[k] = a[i];
               k++;i++;
           }
           else{
               res[k] = b[j];
               k++;j++;
           }
       }
       while(i<n){
            res[k] = a[i];
               k++;i++;
       }
       while(j<m){
           res[k] = b[j];
               k++;j++;
       }

         sort(res,res+m+n);

         for(int i=0;i<m+n;i++){
             cout<<res[i]<<" ";
         }

    }

       
	

int main(){
    int a[5] = {7, 1, 5, 3, 9};
    int b[3] = {20, 0, 2};
    int res[8] = {};
    int n=5,m=3;
    sortedMerge(a,b,res,n,m);
}