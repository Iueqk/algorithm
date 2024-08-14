#include <bits/stdc++.h>
using namespace std;
bool special(int y);
int ans;
int main()
{
    int n = 5;
    while(n--)
    {
        int year;
        cin >> year;
        if(special(year))
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
bool special(int y)
{
    int arr[4];
    for(int i=0;i<=3;i++)
    {
        arr[i] = y%10;
        y/=10;
    }
    return arr[1]==arr[3] && arr[2]+1==arr[0];
}