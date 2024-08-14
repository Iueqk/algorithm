#include <bits/stdc++.h>
#define N 200
using namespace std;
string a;
string b;
int edit();
int dp[N][N]; // a[i]前i个字母 和 b[j]前j个字母
int main()
{
    cin>>a>>b;
    cout<<edit()<<'\n';
    return 0;
}
int edit()
{
    int m = a.length();
    int n = b.length();

    for(int i = 1; i <=m;i++)
        dp[i][0] = i;
    for(int i = 1; i <=n;i++)
        dp[0][i] = i;
    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            if(a[i - 1] == b[j - 1]) //dp[][]下标和字符串下标意义不同
            {
                dp[i][j] = dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = min(dp[i-1][j-1],dp[i-1][j]+1,dp[i][j-1])+1;
            }
        }
    }
    return dp[m][n];
}