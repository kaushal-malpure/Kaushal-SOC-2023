#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n;
    cin >> n;
    if ((n * (n + 1) / 2) % 2 == 0)
    {
        cout << "YES" << "\n";
        ll int p = ceil((sqrt(2 * n * (n + 1) + 1) - 1) / 2) ;
        ll int diff = -1* n * (n + 1) / 4 + p * (p + 1) / 2;
        vector<ll int> v1;
        vector<ll int> v2;
        for (ll int i=1;i<=p;i++)
        {
            v1.push_back(i);
        }
        for(ll int i=p+1;i<=n;i++)
        {
            v2.push_back(i);
        }
        if(diff!=0){
        v2.push_back(diff);
        v1.erase(v1.begin() + diff -1);
        }
        cout<<v1.size()<<"\n";
        for(ll int a = 0; a < v1.size(); a++)
        {
            cout << v1[a] << " ";
        }
        cout << "\n" << n-v1.size() << "\n";
        for(ll int a = 0; a < v2.size(); a++)
        {
            cout << v2[a] << " ";
        }
    }
    else
    cout<<"NO";
}