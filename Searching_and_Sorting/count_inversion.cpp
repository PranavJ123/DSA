#include <iostream>
using namespace std;

long long int _mergeSort(long long arr[], long long temp[], long long left, long long right);
long long int merge(long long arr[], long long temp[], long long left, long long mid, long long right);

long long int inversionCount(long long arr[], long long array_size)
{
    long long temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

long long int _mergeSort(long long arr[], long long temp[], long long left, long long right)
{
    long long mid, inv_count = 0;
    if (left < right)
    {

        mid = (right + left) / 2;

        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long merge(long long arr[], long long temp[], long long left, long long mid, long long right)
{
    long long i, j, k;
    long long inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int main()
{
    long long n;
    cout << "Enter the size of array::";
    cin >> n;
    long long arr[n];
    cout << "Enter the elements of array::";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = inversionCount(arr, n);
    cout << " Number of inversions are " << ans;
    return 0;
}