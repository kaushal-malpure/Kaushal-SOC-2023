#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll int a, ll int b)
{
    if(a == 0 && b == 0)
    {
        cout << "YES" << "\n";
        return;
    }
    if(a == 0 || b == 0)
    {
        cout << "NO" << "\n";
        return;
    }
    if((b >= a && b <= 2*a) || (a >= b && a <= 2*b))
    {
        if((a + b) % 3 == 0)
        {
            cout << "YES"<< "\n";
            return;
        }
        else
        {
            cout << "NO" << "\n";
            return;
        }
    }
    else
    {
        cout << "NO" << "\n";
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        ll int a, b;
        cin >> a >> b;
        solve(a, b);
    }
    

}