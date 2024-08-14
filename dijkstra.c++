#include <bits/stdc++.h>
#define N 100
using namespace std;
struct edge
{
    int v, w; // w:u到v这条边的权重
};
int n, m, s;
int d[N], vis[N];                 // d:该点到原点的最短距离 vis:该点是否出圈
vector<edge> e[N];                // 顶点从1开始，到N
priority_queue<pair<int, int>> q; // q.top:用来维护各个点到源点的最短距离
void dijkstra(int s);
int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> m >> s;
    int a, b, c;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        e[a].push_back({b, c});
    }
    dijkstra(s);
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << " \n"[i == n];
    }
    return 0;
}
void dijkstra(int s)
{
    for (int i = 0; i <= n; i++)
        d[i] = numeric_limits<int>::max(); // 默认所有点到源点的距离是无穷
    d[s] = 0;
    q.push({0, s});
    while (q.size())
    {
        auto t = q.top();
        q.pop();
        int u = t.second;
        if (vis[u])
            continue;
        vis[u] = 1;
        for (auto ed : e[u])
        {
            int v = ed.v, w = ed.w;
            if (d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                q.push({-d[v], v});
            }
        }
    }
}
/*
5 7 1
1 3 5
1 4 2
1 5 2
4 2 6
4 3 2
5 3 1
3 2 2
*/