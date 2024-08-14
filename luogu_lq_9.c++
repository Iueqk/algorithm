#include <bits/stdc++.h>
using namespace std;
string a;
string e_mon;
string e_day;
int month, day;
int main()
{
    cin >> a;
    for (int i = 0; i <= 2; i++)
    {
        e_mon += a[i];
    }
    for (int i = 3; i <= 4; i++)
    {
        e_day += a[i];
    }
    day = stoi(e_day);
    if (e_mon == "Jan")
        month = 1;
    else if (e_mon == "Feb")
        month = 2;
    else if (e_mon == "Mar")
        month = 3;
    else if (e_mon == "Apr")
        month = 4;
    else if (e_mon == "May")
        month = 5;
    else if (e_mon == "Jun")
        month = 6;
    else if (e_mon == "Jul")
        month = 7;
    else if (e_mon == "Aug")
        month = 8;
    else if (e_mon == "Sep")
        month = 9;
    else if (e_mon == "Oct")
        month = 10;
    else if (e_mon == "Nov")
        month = 11;
    else if (e_mon == "Dec")
        month = 12;

    cout << month << " " << day << '\n';
    return 0;
}