#include <bits/stdc++.h>
using namespace std;
int n;
float half;
int ans;
void solve();
int main()
{
    cin >> n;
    half = (float)n / 2; //注意 要用float精准一半
    solve();
    cout << ans << '\n';
    return 0;
}
void solve()
{
    for (int i = 1; i <= n - 1; i++)
    {
        if ((i * i) % n < half)
            ans++;
    }
}