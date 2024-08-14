#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;
const int BASE = 31;     // 基数，通常选择质数
const int MOD = 1e9 + 9; // 取模的值，通常选择一个大质数

// 计算字符串的哈希值
int calculateHash(const string &s)
{
    int hashValue = 0;
    for (char c : s)
    {
        hashValue = (1LL * hashValue * BASE + c - 'a' + 1) % MOD;
    }
    return hashValue;
}       

int main()
{
    int N;
    cin >> N;

    unordered_set<int> hashSet;
    for (int i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        int hashValue = calculateHash(s);
        hashSet.insert(hashValue);
    }

    cout << hashSet.size() << endl;

    return 0;
}