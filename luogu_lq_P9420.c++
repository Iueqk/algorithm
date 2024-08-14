#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[5]={0}; // dp[i]:长度为i的“2023”字串的数量
string str;
int main()
{
    for(int i=1;i<=2023;i++)
    {
        str+=to_string(i);
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='2')
        {
            dp[1]++;
            dp[3]+=dp[2];
        }
        else if(str[i]=='0')
        {
            dp[2]+=dp[1];
        }
        else if(str[i]=='3')
        {
            dp[4]+=dp[3];
        }
    }
    cout << dp[4] << '\n';
    return 0;
}