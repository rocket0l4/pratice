#include <bits/stdc++.h>
using namespace std;
int ans(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += (n % 10);
        n /= 10;
    }
    return count;
}
void uttar()
{
    int n;
    cin >> n;
    int a[n + 2];
    int sum =0;
    for (int i = 0; i < n; i++)
    
        cin >> a[i];
    for(int i =0;i<n;i++){
        for (int j = i + 1; j < n; j++)
        {
            sum = max(sum, ans(a[i] * a[j]));
        }
    }    
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        uttar();
    }

    return 0;
}