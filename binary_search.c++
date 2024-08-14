#include <bits/stdc++.h>
using namespace std;
int find(int tar);
int arr[10005];
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + 10);
    cout << find(0) << '\n';
    return 0;
}

int find(int tar)
{
    int mid;
    int l = -1, r = 10;
    while (l + 1 < r)
    {
        mid = (l + r) / 2;
        if (arr[mid] <= tar)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}
// int find(int tar)
// {
//     int mid;
//     int l = -1, r = 10;
//     while (1 + l < r)
//     {
//         mid = (l + r) / 2;
//         if (arr[mid] >= tar) /*中间值比 目标大*/
//         {
//             mid = r;
//         }
//         else
//         {
//             mid = l;
//         }
//     }
//     return r;
// }