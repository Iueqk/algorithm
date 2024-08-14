#include<bits/stdc++.h>
using namespace std;
const int N = 100; // 数据范围 2-N
bool f[N+10]; // 是否标记，标记的就不是素数
vector<int> prime;
int main()
{
    for(int i=2;i<=N;i++)
    {
        if(!f[i]) //如果没有被标记 那么是质数
            prime.push_back(i);
        for(int j=0;j<prime.size()&&i*prime[j]<=N;j++)
        {
            f[i*prime[j]]=1;
            if(i%prime[j]==0)
                break;
        }
    }
    for(int t : prime)
    {
        cout << t << " ";
    }
    return 0;
}