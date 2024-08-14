#include <bits/stdc++.h>
using namespace std;
const int N = 9;

int path[N + 1];
bool st[N + 1];
int n;
void in();
void dfs(int u);
int main()
{
    in();
    dfs(1);
    return 0;
}
void in()
{
    cin >> n;
}
void dfs(int u)
{
    if (u == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << setw(5) << path[i];
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!st[i])
        {
            st[i] = true;
            path[u] = i;
            dfs(u + 1);
            st[i] = false;
        }
    }
}