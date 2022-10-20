#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,ans =0;
        cin>>n>>a;
        int uninfected = (n-a);
       if(uninfected < a)
       cout<<uninfected<<endl;
       else
       cout<<a<<endl;
    }

    return 0;
}