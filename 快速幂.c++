#include <iostream>
using namespace std;
typedef long long ll;
// 快速幂算法求 a^b mod p
ll power(ll a, ll b, ll p)
{
    ll result = 1;
    a %= p; // 防止 a 非常大时超出范围
    while (b > 0)
    {
        if (b & 1) // 如果 b 是奇数
            result = (result * a) % p;
        a = (a * a) % p;
        b >>= 1; // 右移一位，相当于除以 2
    }
    return result;
}

int main()
{
    ll a, b, p;
    cin >> a >> b >> p;
    printf("%lld^%lld mod %lld=%lld", a, b, p, power(a, b, p));
    return 0;
}