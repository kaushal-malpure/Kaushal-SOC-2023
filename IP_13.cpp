#include <bits/stdc++.h>
using namespace std;

void palindrome(string &str)
{
    int n = str.size();
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            if(j - i == 2 && str[j - 1] == str[j])
            {
                swap(str[j-1], str[i]);
                cout << str;
                return ;
            }
            int k = j;
            int flag = 0;
            while (k > i)
            {
                
                if (str[k] == str[i])
                {
                    flag = 1;
                    break;
                }
                k--;
            }
            if (flag)
            {
                swap(str[j], str[k]);
                i++;
                j--;
            }
            else
            {
                cout << "NO SOLUTION";
                return;
            }
        }
    }
    cout << str;
    return;
}
int main()
{
    string str;
    cin >> str;
    palindrome(str);
    /*
    if (str.size() % 2 == 0)
    {
        palindrome(str);
    }
    else
    {
        string arr = str;
        int m = 0, n = str.size() - 1;
        int count = 0;
        while (m < n)
        {
            if(arr[m] == arr[n])
            {
                arr[m] = 0;
                arr[n] = 0;
            }
            else
            {

            }
        }
    }
    */
}