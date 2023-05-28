#include <bits/stdc++.h>
using namespace std;
#define ll long long
int minimove(ll int arr[], ll int n)
{
    ll int count = 0;
    for(int i = 1; i < n; i++)
    {
        for(ll int j = i-1; j >= 0; j--)
        {
            if(arr[j+1] < arr[j])
            {
                swap(arr[j+1], arr[j]);
                arr[j+1]++;
                count++;
                for(int k = 0; k < n; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
            
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
    ll int minMove = minimove(arr, n);
    cout << minMove;
}