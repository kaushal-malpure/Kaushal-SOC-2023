#include <bits/stdc++.h>
using namespace std;
vector<int> beauty(int n)
{
    vector<int> v;
    if(n % 2 == 1)
    {
        int i = n - 1;
        while(i > 0)
        {
            v.push_back(i);
            i = i - 2;
        }
        v.push_back(n);
        int j = 1;
        while(j < n)
        {
            v.push_back(j);
            j = j + 2;
        }
    }
    else
    {
        int i = 1;
        while(i < n)
        {
            v.push_back(i);
            i = i + 2;
        }
        //v.push_back(n);
        int j = 2;
        while(j <= n)
        {
            v.push_back(j);
            j = j + 2;
        }
    }
    return v;
}
int main()
{
    int n;
    cin >> n;
    vector<int> beauty_array;
    if(n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    else if(n == 1)
    {
        cout << "1";
        return 0;
    }
    else if(n == 4)
    {
        cout << "2 4 1 3";
        return 0;
    }
    else
    {
        beauty_array = beauty(n);
    }
    for(int i = 0; i < n; i++)
    {
        cout << beauty_array[i] << " ";
    }
    return 0;
}