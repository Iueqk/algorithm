#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 6;
string p, t;
int d[N];
void cal_d();
int find();
int ans;
int be;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    getline(cin, p);
    getline(cin, t);
    cal_d();
    find();
    return 0;
}
void cal_d()
{
    int i = 1, j = 0;
    while (i < t.size())
    {
        if (toupper(t[i]) == toupper(t[j]))
            d[i++] = ++j;
        else
        {
            if (j == 0)
                ++i;
            else
            {
                j = d[j - 1];
            }
        }
    }
}
int find()
{
    int i = 0, j = 0;
    while (i < t.size())
    {
        if (toupper(t[i]) == toupper(p[j]))
        {
            i++;
            j++;
            if (j >= p.size())
                return i - j;
        }
        else
        {
            if (j == 0)
                ++i;
            else
            {
                j = d[j - 1];
            }
        }
    }
    return -1;
}