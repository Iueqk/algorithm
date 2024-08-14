#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n;
int main()
{
    cin >> n;
    ll c[n],z[n],a,b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
         c[i] = a / b; // 转化率
        z[i] = a/(b + 1); // 加1，表示最低转化率
    }
    
    cout << *max_element(z,z+n)+1 << " " << *min_element(c,c+n) << '\n';
    return 0;
}