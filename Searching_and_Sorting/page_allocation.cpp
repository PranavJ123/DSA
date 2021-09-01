#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int N, int M, int mid)
{
    int studentRequired = 1;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (sum + arr[i] > mid)
        {
            studentRequired++;
            sum = arr[i];

            if(studentRequired>M){
                return false;
            }
        }
       else{
           sum += arr[i];
       }
    }
    return true;
    
}

int findPages(int arr[], int N, int M)
{
    int sum = 0;
    if(N < M)
    {
        return -1;
    }
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    int start = 0;
    int end = sum;
    int result = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossible(arr, N, M, mid))
        {
            result = min(result, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return result;
}

int main()
{
    int arr[8] = {250, 74, 159, 181, 23, 45, 129, 174};
    int N = 8;
    int M = 6;

    cout << findPages(arr, N, M);
}