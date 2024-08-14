#include <bits/stdc++.h>
using namespace std;
const int N = 9;

char path[N + 1];

bool st[N + 1];
int a, b, c;
bool flag = true;
void in();
void dfs(int u);
void out();
int main()
{
    in();
    dfs(1);
    out();
    return 0;
}
void in()
{
    cin >> a >> b >> c;
}
void dfs(int u)
{
    if (u == N + 1)
    {
        string str;
        for (int i = 1; i <= N; i++)
        {
            str += path[i];
        }
        int p1 = stoi(str.substr(0, 3)); // 从0开始，截取3个
        int p2 = stoi(str.substr(3, 3));
        int p3 = stoi(str.substr(6, 3));

        if (a * p2 == b * p1 && a * p3 == c * p1)
        {
            for (int i = 1; i <= N; i++)
            {
                cout << path[i];
                if (i % 3 == 0)
                    cout << " \n"[i == N];
            }
            flag = false;
        }
        return;
    }
    for (int i = 1; i <= N; i++)
    {
        if (!st[i])
        {
            st[i] = true;
            path[u] = '0' + i;
            dfs(u + 1);
            st[i] = false;
        }
    }
}
void out()
{
    if (flag)
    {
        cout << "No!!!" << '\n';
    }
}