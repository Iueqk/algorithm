#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 6;
ll arr[N];

ll n, m;
ll find(ll tar);
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        ll tar;
        cin >> tar;
        cout << find(tar) << " \n"[m == 0];
    }
    return 0;
}
ll find(ll tar)
{
    ll l = 0, r = n + 1;
    while (l + 1 < r)
    {
        ll mid = (l + r) / 2; 
        if (arr[mid] >= tar) // 中间值比目标值大，说明目标值在左半区。
        {
            r = mid; // 第一次出现的编号 arr[mid] <= tar ,l = mid，最后一个出现的下标
        }
        else
        {
            l = mid;
        }
    }
    return arr[r] == tar ? r : -1;
}