#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
    cin >> a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]-=32;
    }
    cout << a << '\n';
    return 0;
}