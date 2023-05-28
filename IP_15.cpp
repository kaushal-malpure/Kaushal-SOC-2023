#include <bits/stdc++.h>
using namespace std;
void towerhanoi(int n, int start, int mid, int end)
{
    if(n == 0)
    {
        return ;
    }
    towerhanoi(n - 1, start, end, mid);
    cout << start << " " << end << "\n";
    towerhanoi(n - 1, mid, start, end);
}
int main()
{
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << "\n";
    towerhanoi(n, 1, 2, 3);
}