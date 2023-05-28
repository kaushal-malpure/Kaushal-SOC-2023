#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    //vector<int> v;
    long long int sum = 0;
    for(long long int i = 0; i < n-1; i++)
    {
        long long int k;
        cin >> k;
        sum = sum + k;
        //v.push_back(k);
    }
    long long int fullSum = n* (n + 1) / 2;
    long long int missing = fullSum - sum;
    cout << missing;
}