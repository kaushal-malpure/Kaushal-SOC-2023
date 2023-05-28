#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[])
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
}
graycode(int arr[], int index)
{
    printarray(arr);  
    for(int i = 0; i < n; i++)
    {
        
    }
} 
int main()
{
    int n;
    cin >> n;
    int index = n - 1;
    int arr[n] = {0};
    // for(int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    graycode(n, index);
    return 0;
}