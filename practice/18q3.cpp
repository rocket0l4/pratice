#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (s.find("ch") < n)
            count += 1;
        else if (s.find("he") < n)
            count += 1;
        else if (s.find("ef") < n)
            count += 1;
    }
    cout << count << endl;

    return 0;
}