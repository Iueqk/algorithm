#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int main()
{
    cin >> n;
    while(n)
    {
        if(n>1)
            cout << n << " ";
        else
            cout << n;
        n/=2;
    }
    return 0;
}