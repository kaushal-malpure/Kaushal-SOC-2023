#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n;
    cin >> n;
    ll int count = 0;
    while(n != 0)
    {
        count = count + n / 5;
        n = n / 5;
    }
    cout << count;
}