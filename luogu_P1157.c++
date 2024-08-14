#include <bits/stdc++.h>
using namespace std;
const int N = 20;

int path[N + 1];
bool st[N + 1];
int n, r;
void in();
void dfs(int u, int p);
int main()
{
    in();
    dfs(1, 1);
    return 0;
}
void in()
{
    cin >> n >> r;
}
void dfs(int u, int p)
{
    if (u == r + 1)
    {
        for (int i = 1; i <= r; i++)
        {
            cout << setw(3) << path[i];
        }
        cout << '\n';
        return;
    }
    for (int i = p; i <= n; i++)
    {
        if (!st[i])
        {
            st[i] = true;
            path[u] = i;
            dfs(u + 1, i + 1);
            st[i] = false;
        }
    }
}