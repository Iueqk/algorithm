#include <bits/stdc++.h>
using namespace std;
const int sub = 4;
const int N = 61;

bool st[sub + 1];

int arr[4];
int ti[sub+1];
int min_time = 9999;
void dfs(int u,int time);
int solve_time(vector<int> &e);
int main()
{
    for(int i = 0; i <4;i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0;i<4;i++)
    {
        vector<int> e;
        while(arr[i]--)
        {
            int t;
            cin >> t;
            e.push_back(t);
        }
        ti[i+1] = solve_time(e);

    }
    int ans;
    for(int i = 1; i <=sub;i++)
    {
        ans +=ti[i];
    }
    cout << ans << '\n';
    return 0;
}
int solve_time(vector<int> &e)
{
    sort(e.begin(),e.end());
   
    int ans;
    for(vector<int>::iterator it = e.begin();it<e.end()-1; it++)
    {
        ans += *it;
    }
    return max(ans,e.back());
}
void dfs(int u,int time)
{
    if(u == sub + 1)
    {
        if(time < min_time)
        {
            min_time = time;
        }
        return;
    }
    for(int i = 1;i<=sub;i++)
    {
        if(!st[i])
        {
            st[i] = 1;
            dfs(u+1,time+ti[i]);
            st[i] = 0;
        }
    }
}