#include <bits/stdc++.h>
#define N 200
using namespace std;

int n, m; // n:物品个数 m：容量
int w[N], v[N];
int dp[N]; // 容量为j的背包，装的最大价值
int value();
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    cout << value() << '\n';
    return 0;
}
int value()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= w[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    return dp[m];
}
/*
3 6
3 5
2 3
4 6
*/