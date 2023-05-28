#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int x = pow(10,9) + 7;
    long long int ans;
    ans = pow(2, n);
    long long int result = ans % x;
    //cout << ans;
    cout << result;
}