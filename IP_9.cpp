#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll int solve(ll int n, ll int index, ll int m, ll int ans)
{
    //ll int ans = 1;
    if(index > n)
    {
        return ans;
    }
    ans = ans * 2;
    if(ans > m)
    {
        ans = ans - m;
        return solve(n, index + 1, m, ans);
    }
    else
    {
        return solve(n, index + 1, m, ans);
    }
}
int main()
{
    ll int n;
    cin >> n;
    ll int index = 1;
    ll int m = 1000000007;
    ll int answer = 1;
    ll int ans = solve(n, index, m, answer);
    cout << ans;
}