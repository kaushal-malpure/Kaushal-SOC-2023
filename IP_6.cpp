#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll int x, ll int y) 
{
    if(x == y)
    {
        if(x % 2 == 0)
        {
            cout << x*x - y + 1 ;
            cout << "\n";
            return ;
        }
        else
        {
            cout << y*y - x + 1 ;
            cout << "\n";
            return ;
        }
    }
    else if(y > x)
    {
        if(y % 2 == 0)
        {
            cout << (y-1)*(y-1) + x ;
            cout << "\n";
            return ;
        }
        else
        {
            cout << y*y - x + 1 ;
            cout << "\n";
            return ;
        }
    }
    else
    {
        if(x % 2 == 0)
        {
            cout << x*x - y + 1 ;
            cout << "\n";
            return ;
        }
        else
        {
            cout << (x-1)*(x-1) + y ;
            cout << "\n"; 
            return ;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int tc = 1;
    cin >> tc;
    for (ll int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        ll int x, y;
        cin >> x;
        cin >> y;
        solve(x, y);
    }
}