#include <iostream>
using namespace std;
void solve(long long int n)
{
    if(n == 1)
    {
        //cout << "1";
        return ;
    }
    if(n % 2 == 0)
    {
        n = n / 2;
        cout << n << " ";
        solve(n);
    }
    else
    {
        n = n*3 + 1;
        cout << n << " ";
        solve(n);
    }
}
int main()
{
    long long int n;
    //cout << "n = " ;
    cin >> n;
    cout << n << " ";
    solve(n);
    //cout << "1" << endl;
}