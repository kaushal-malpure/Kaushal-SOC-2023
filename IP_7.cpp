#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin >> n;
    for(ll int i = 1; i <= n; i++)
    {
        ll int ways = (i*i)*(i*i- 1)/2 - 4*(i-2)*(i-1);
        cout << ways << "\n";
    }

}