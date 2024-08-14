#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right)
{
    long long count = 0;
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right)
    {
        if (arr[i] > arr[j])
        {
            count += mid - i + 1; // 统计逆序对数目
            temp[k++] = arr[j++];
        }
        else
        {
            temp[k++] = arr[i++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    for (int p = left; p <= right; p++)
    {
        arr[p] = temp[p];
    }
    return count;
}

long long mergeSort(vector<int> &arr, vector<int> &temp, int left, int right)
{
    long long count = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        count += mergeSort(arr, temp, left, mid);
        count += mergeSort(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid, right);
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> temp(n);
    long long inversionCount = mergeSort(arr, temp, 0, n - 1);

    cout << inversionCount << endl;

    return 0;
}