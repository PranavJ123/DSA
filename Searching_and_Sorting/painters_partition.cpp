#include <iostream>
using namespace std;

int findPainters(int arr[], int n, int mid)
{
    int sum = 0;
    int painters = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > mid)
        {
            sum = arr[i];
            painters++;
        }
    }
    return painters;
}

int minTime(int arr[], int n, int k)
{
    int totalLength = 0;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        m = max(m, arr[i]);
        totalLength += arr[i];
    }
    int start = m, end = totalLength;
    while (start < end)
    {
        int mid = (start + end) / 2;
        int painters = findPainters(arr, n, mid);
        if (painters <= k)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int arr[10] = {10, 5, 20, 25, 17, 23, 2, 9, 4, 13};
    int n = 10;
    int k = 7;
    cout << minTime(arr, n, k);
}