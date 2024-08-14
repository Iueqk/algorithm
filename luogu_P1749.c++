#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 9;
bool st[N];
int n, k;
void dfs(int u, int sum);
bool flag = false;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        dfs(1, 0);
        if (flag)
        {
            flag = false;
            cout << "Yes";
        }

        else
            cout << "No";
    }

    return 0;
}

void dfs(int u, int sum)
{
    if(flag)
        return;
    if (sum > n)
        return;
    if (u == k + 1)
    {
        if (sum == n)
            flag = true;

        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!st[i])
        {
            st[i] = 1;
            dfs(u + 1, sum + i);
            st[i] = 0;
        }
    }
}