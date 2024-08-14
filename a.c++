#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n,m; // n是操作 m是点数
double x[N];
double y[N];
int op[N];
double t[N];
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> op[i] >> t[i];
    }
    int op1,op2;
    for(int i=1;i<=m;i++)
    {
        cin >> op1 >> op2 >> x[i]>> y[i];
        for(int j=op1;j<=op2;j++)
        {
            if(op[j] == 1)
            {
                x[i]*=t[j];
                y[i]*=t[j];
            }
            else //旋转
            {
                double tx = x[i],ty = y[i];
                x[i] = tx*cos(t[j]) - ty*sin(t[j]);
                y[i] = tx*sin(t[j]) + ty*cos(t[j]);
            }
        }
        printf("%.3lf %.3lf\n",x[i],y[i]);
    }
    return 0;
}