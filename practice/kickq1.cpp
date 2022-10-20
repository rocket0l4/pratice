#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int sum = 0;
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ans += sum % m;
    cout<<ans<<endl;
}
int main()
{
    int t,i =1;
    cin >> t;
    while (t--)
    {
         cout << "Case #" << i << ": " ;
         solve();
        ++i;
    }
}