#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N;
ll ans = 0;
int front(ll n);
int end(ll n);
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> N;
    ll arr[N+1];
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    if(N == 1)
    {
        cout << "0" << '\n';
    }
    else
    {
        for(ll i = 1; i < N;i++)
        {
            for(ll j = i+1; j <=N;j++)
            {
                if(end(arr[i])!= front(arr[j]))
                {
                    ans++;
                }
                else
                {
                    i += (j - i) - 1;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
int front(ll n)
{
    ll t;
    while (n)
    {
        t = n;
        n /= 10;
    }
    return t;
}
int end(ll n)
{
    return n % 10;
}