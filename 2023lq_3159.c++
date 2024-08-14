#include <bits/stdc++.h>
const int N = 1e6 + 6;
using namespace std;
string str;
int s[N];
int ans;
int main()
{
    cin >> str;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != '?')
        {
            if (str[i] == str[i - 1] && !s[i - 1])
            {
                ans++;
                s[i] = 1;
            }
        }
        else
        {
            if (!s[i - 1] && !s[i]) // 未被匹配
            {
                ans++;
                str[i] = str[i - 1];
                s[i] = 1;
            }
            else
            {
                if (i != str.length() - 1 && !s[i])
                {
                    ans++;
                    str[i] = str[i + 1];
                    s[i] = s[i + 1] = 1;
                }
            }
        }
    }
    cout << ans << '\n';

    return 0;
}