#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a,b,n,total,ans;
int main()
{
    cin >> a >> b >> n;
    for(ll i = 1;;i++) // i是天数
    {
        if(i%7 <=5 && i%7>=1)
        {
            total+=a;
        }
        else
        {
            total+=b;
        }
        if(total >= n)
        {
            ans = i;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}