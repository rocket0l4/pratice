#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, count = 0, t = 0, h = 0;
        string s;
        cin>>l>>s;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'H')
            {
                h++;
            }
            if (s[i] == 'T')
            {
                t++;
            }
            if (h < t || h - t > 1)
            {
                cout << "Invalid" << endl;
                count++;
                break;
            }
        }
        if (count == 0 && h != t)
        {
            cout << "InValid" << endl;
        }
        else if (count == 0)
        {
            cout << "valid" << endl;
        }
    }

    return 0;
}