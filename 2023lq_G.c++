#include <bits/stdc++.h>
#define N 5000005
using namespace std;
typedef long long ll;
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
ll n, k,flag;
ll arr[N],ind[N],ans[N];
void solve();
void out();
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        q.push({arr[i], i});
    }
    while (k--)
    {
        solve();
    }
    out();
    return 0;
}
void solve()
{
    pair<int, int> t = q.top();
    q.pop();
    if (t.second == 1)
    {
        arr[t.second + 1] += t.first;
    }
    else if (t.second == n)
    {
        arr[t.second - 1] += t.first;
    }
    else
    {
        arr[t.second + 1] += t.first;
        arr[t.second - 1] += t.first;
    }
}
void out()
{
    
    while (1)
    {
        pair<ll, ll> t = q.top();
        q.pop();
        if (q.size())
        {
            cout << arr[t.second] << " ";
        }
        else
        {
            cout << arr[t.second] << '\n';
            break;
        }
    }
}