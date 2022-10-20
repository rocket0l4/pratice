#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int s, j;
        // cin>>s>>j;
        while(n--){

        cin>>s>>j;
            if (abs(j-s > 5))
            
                count+=1;
            
            
        }

        cout << count << endl;
    }

    return 0;
}