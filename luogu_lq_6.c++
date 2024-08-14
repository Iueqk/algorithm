#include <bits/stdc++.h>
using namespace std;
const int N = 10001;
int score[N+1];
int n;
int max_s=-1,min_s=101;
float ave_s;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> score[i];
        ave_s += score[i];
        if(score[i] < min_s)
            min_s = score[i];
        else if(score[i] > max_s)
            max_s = score[i];
    }
    ave_s /= n;
    printf("%03d\n%d\n%.2f\n",max_s,min_s,ave_s);
    return 0;
}