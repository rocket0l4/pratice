#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int count = 0;
        cin >> s;
        int n = s.length();
       
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 2] && s[i] != s[i + 1])
            {
                count += 1;
            }
        }

        if (count == (n - 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
         if (n == 2 && s[0] != s[1])
        {
            cout << "YES" << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << "NO" << endl;
            continue;
        }
    }

    return 0;
}