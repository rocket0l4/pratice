#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (((b[i] - a[i]) != x) && ((b[i] - a[i]) != y)){
                count = 1;
            }
        }

        if (count == 1)
        {
            cout << "NO" << endl;
        }
        else
        cout << "YES" << endl;
    }

    return 0;
}