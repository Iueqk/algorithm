#include <bits/stdc++.h>
using namespace std;
const int n = 10;
const int m = 10000;
int tl, total;
int path[n + 1];
bool st[n + 1]; // 横向遍历结果的约束条件
void in();
void dfs(int u, int sum);
void out();
vector<int> e[m];
int main()
{
    in();
    dfs(1, 0);
    out();
    return 0;
}
void in()
{
    cin >> tl;
}
void dfs(int u, int sum)
{
    if (u == n + 1)
    {
        if (sum == tl)
        {
            for (int i = 1; i <= n; i++)
            {
                // cout << path[i] << " \n"[i == n];
                e[total].push_back(path[i]);
            }
            total++;
        }
        return;
    }
    for (int i = 1; i <= 3; i++)
    {
        if (!st[u])
        {
            st[u] = 1;
            int t = sum + i;
            path[u] = i;
            dfs(u + 1, t);
            st[u] = 0;
        }
    }
}
void out()
{
    cout << total << '\n';
    if (total)
    {
        for (int i = 0; i < total; i++)
        {
            vector<int>::iterator it;
            for (it = e[i].begin(); it != e[i].end(); it++)
            {
                cout << *it << " \n"[it == e[i].end() - 1];
            }
        }
    }
}