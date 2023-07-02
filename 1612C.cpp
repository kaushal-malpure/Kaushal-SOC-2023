#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// -------------------------<RNG>-------------------------
// RANDOM NUMBER GENERATOR
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define SHUF(v) shuffle(all(v), RNG);
// Use mt19937_64 for 64 bit random numbers.
int sum(int k, int i)
{
    int SUM;
    if (i <= k)
    {
        SUM = i * (i + 1) / 2;
    }
    else
    {
        SUM = k * (k + 1) / 2 + k * (k - 1) / 2 - (2 * k - 1 - i) * (2 * k - i) / 2;
    }
    return SUM;
}
void solve(ll int k, ll int x)
{
    int s = 1, e = 2 * k - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    if (k * (k + 1) / 2 + k * (k - 1) / 2 <= x)
    {
        cout << 2 * k - 1 << "\n";
        return;
    }
    while (s <= e)
    {
        
        // cout << mid << " ";
        // cout << sum(k, mid) << "\n";
        if (sum(k, mid) > x)
        {
            e = mid - 1;
            
            mid = s + (e - s) / 2;
        }
        else
        {
            s = mid + 1;
            ans = mid;
            mid = s + (e - s) / 2;
        }
    }
    cout << ans << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll int tc = 1;
    cin >> tc;
    for (ll int t = 1; t <= tc; t++)
    {
        ll int k, x;
        cin >> k >> x;
        solve(k, x);
    }
}
