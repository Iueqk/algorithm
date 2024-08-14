#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int ans;
vector<int> e[N];
int n, m;
void dfs(int deep, int u, int fa);
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        dfs(1, i, -1);
    }
    cout << ans << '\n';
    return 0;
}
void dfs(int deep, int u, int fa)
{
    if (deep == 4)
    {
        ans++;
        return;
    }
    for (int j = 0; j < e[u].size(); j++)
    {
        if (e[u][j] != fa)
            dfs(deep + 1, e[u][j], u);
        // cout << "dfs("<<deep+1 << ", "<<e[i][j]<<")"<<'\n';
    }
}