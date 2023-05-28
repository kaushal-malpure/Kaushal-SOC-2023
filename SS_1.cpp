#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<ll int> v1, vector<ll int> v2, ll int n, ll int m, ll int k)
{
    ll int count = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(abs(v1[i] - v2[j]) <= k)
        {
            count++;
            //cout << count;
            i++; j++;
        }
        else
        {
            if(v1[i] > v2[j])
                j++;
            else
                i++;
        }

    }
    cout << count;
}
int main()
{
    ll int n, m, k;
    cin >> n >> m >> k;
    vector<ll int> v1, v2;
    for(int i = 0; i < n; i++)
    {
        ll int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for(int i = 0; i < m; i++)
    {
        ll int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    solve(v1, v2, n, m, k);
}