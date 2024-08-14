#include <bits/stdc++.h>
using namespace std;
int n,k;
unsigned int min_l=999999999;
unsigned int total=0;
int main()
{
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        total += a*b;
        int c = min(a,b);
        if(c < min_l)
        {
            min_l = c;
        }
    }
    while(1)
    {
        min_l--;
        if(min_l*min_l*k <= total)
        break;
    }

    cout << min_l << '\n';
    return 0;
}