#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll int> v, ll int n, ll int x)
{
    ll int count = 0;
    sort(v.begin(), v.end());
    ll int i = 0, j = n - 1;
    while(i <= j)
    {
        if(v[i] + v[j] <= x)
        {
            count++;
            i++; j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    cout << count;
}
int main()
{
    ll int n, x;
    cin >> n >> x;
    vector<ll int> v;
    for(ll int i = 0; i < n; i++)
    {
        ll int temp;
        cin >> temp;
        v.push_back(temp);
    }
    solve(v, n, x);
}