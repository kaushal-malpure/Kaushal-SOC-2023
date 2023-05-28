#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll int solve(ll int arr[], ll int n)
{
    ll int count = 0;
    for(ll int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            count += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    return count;
}

int main()
{
    ll int n;
    cin >> n;
    ll int arr[n];
    for(ll int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr, n);
}