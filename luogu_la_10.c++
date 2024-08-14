#include <bits/stdc++.h>
using namespace std;

int n;
unsigned int ans;
bool valid(int n);
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (!valid(i))
            ans += i;
    }
    cout << ans << '\n';
    return 0;
}
bool valid(int n)
{
    while (n)
    {
        int t = n % 10;
        if (t == 2 || t == 0 || t == 1 || t == 9)
            return false;
        n /= 10;
    }
    return true;
}