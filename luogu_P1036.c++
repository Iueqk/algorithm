#include <bits/stdc++.h>
using namespace std;
const int N = 20;

bool st[N + 1];
int arr[N + 1];

int n, k;
int ans;

void in();
void dfs(int u, int p, int sum);
void out();
bool is_prime(int n);
int main()
{
    in();
    dfs(1, 1, 0);
    out();
    return 0;
}
void in()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
}
void dfs(int u, int p, int sum)
{
    if (u == k + 1)
    {
        if (is_prime(sum))
            ans++;
        return;
    }

    for (int i = p; i <= n; i++)
    {
        if (!st[i])
        {
            st[i] = true;
            dfs(u + 1, i + 1, sum + arr[i]);
            st[i] = false;
        }
    }
}
void out()
{
    cout << ans << '\n';
}
bool is_prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}