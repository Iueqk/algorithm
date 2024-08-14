#include <bits/stdc++.h>
using namespace std;
const int N = 1001;

bool st[N];
string a, b;
int main()
{
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'z')
        {
            if (a[i + 1] >= '0' && a[i + 1] <= '9')
            {
                st[i] = true;
            }
        }
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'z')
        {
            if (st[i])
                for (int j = 1; j <= a[i + 1]-'0'; j++)
                {
                    b += a[i];
                }
            else
                b += a[i];
        }
    }
    cout << b << '\n';
    return 0;
}