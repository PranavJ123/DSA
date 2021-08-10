#include<iostream>
using namespace std;

int knapsack(int value[],int wt[],int n,int W){
    if( n == 0 || W == 0){
        return 0;
    }

    if(wt[n-1] > W){
        return knapsack(value,wt,n-1,W);
    }

    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1] , knapsack(value,wt,n-1,W));
}

int main(){
    int value[] = {100,300,500};
    int wt[] = {10,30,50};
    int W = 80;

    cout<<knapsack(value,wt,3,W);
}