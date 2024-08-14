#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 4;
int f[N];
int n, m;
int find(int x)
{
    if (f[x] == x)
        return x;
    return f[x] = find(f[x]);
}
void u(int x, int y)
{
    int rootX = find(x);
    int rootY = find(y);

    if (rootX != rootY)
    {
        f[min(rootX, rootY)] = max(rootX, rootY);
    }
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    int z, x, y;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    while (m--)
    {
        cin >> z >> x >> y;
        if (z == 2)
        {
            if (find(x) == find(y))
                cout << "Y" << '\n';
            else
                cout << "N" << '\n';
        }
        else
        {
            u(x, y);
        }
    }
    return 0;
}