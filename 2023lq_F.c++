#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
ll len;
ll ans = 0 ,flag = 0;
char f, e;
int main()
{
    cin >> len;
    cin >> str >> f >> e;

    for (ll i = 0; i < str.length(); i++)
    {
        // if (str[i] != f)
        // {
        //     continue;
        // }
        // for (ll j = i + (len - 1); j < str.length(); j++)
        // {
        //     if (str[j] == e)
        //     {
        //         ans++;
        //         for(ll k = i; k <=j;k++)
        //         {
        //             cout << str[k] << " \n"[k==j];
        //         }
        //     }
        // }
        if (i - len + 1 >= 0 && str[i - len + 1] == f)
            flag++;
        if (str[i] == e)
            ans += flag;
    }
    cout << ans << '\n';
    return 0;
}