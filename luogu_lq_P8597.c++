#include<bits/stdc++.h>
using namespace std;
int ans;
string a,b;
int main()
{
    cin >> a >> b;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]!=b[i])
        {
            ans++;
            if(a[i+1]=='*')
                a[i+1] = 'o';
            else
                a[i+1] = '*';
        }
    }
    cout << ans << '\n';
    return 0;
}