#include <bits/stdc++.h>
using namespace std;
const int N = 12;
int t;
int n;
int T[N];
int D[N];
int L[N];
bool flag = false;
bool st[N];
void dfs(int deep, int time);
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> T[i] >> D[i] >> L[i];
        }
        dfs(1, 0);
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        flag = false;
    }
    return 0;
}
void dfs(int deep, int time)
{
    if (flag)
        return;
    if (deep == n+1)
    {
        flag = true;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!st[i])
        {
            if (T[i] + D[i] < time) //飞机的油量不足以达到下降的要求 坠机
                return;
            st[i] = true;
            dfs(deep + 1, max(T[i], time) + L[i]);// 满足下降的条件，下降的时刻为max(T[i],time)
            st[i] = false;
        }
    }
}