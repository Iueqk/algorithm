#include <bits/stdc++.h>
const int N = 1e5 + 5;
using namespace std;

int st[N];
int min_v = 99999999;
int max_v = -10000;
int n;

int q, c;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string input;
        getline(cin, input);
        istringstream iss(input);
        int t;
        while (iss >> t)
        {
            if (t < min_v)
                min_v = t;
            else if (t > max_v)
                max_v = t;
            st[t]++;
        }
    }

    for (int i = min_v; i <= max_v; i++)
    {
        if (!st[i])
        {
            q = i;
        }
        else if (st[i] >= 2)
            c = i;
    }
    cout << q << " " << c << '\n';
    return 0;
}