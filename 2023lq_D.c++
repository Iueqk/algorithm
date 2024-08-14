#include <bits/stdc++.h>
#define N 20
using namespace std;

struct plane
{
    int t,d,l;
}p[N];
bool visit[N];
void work();
bool dfs(int start,int ind, int time);

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
    return 0;
}
void work()
{
    int ind;
    cin >> ind;
    for(int i = 0 ; i < ind; i++)
    {
        int t,d,l;
        cin >> t >> d >> l;
        p[i].t = t;
        p[i].d = d;
        p[i].l = l;
    }
    if(dfs(0,ind,0))
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}

bool dfs(int start , int end , int time)
{
    if(start >= end)
    {
        return 1;
    }
    for(int i = 0; i < end; i++)
    {
        if(!visit[i])
        {
            visit[i] = 1;
            if(p[i].t<=time && (p[i].t + p[i].d) >= time)
            {
                int t;
                t =max(time,p[i].t) + p[i].l;
                if(dfs(i + 1,end,t))
                {
                    return 1;
                }
            }
            else
            {
                visit[i] = 0;
                return 0;
            }
             visit[i] = 0;
        }
    }
    return 0;
}