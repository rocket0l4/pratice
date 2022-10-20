#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        double sum =0,avg=0;
        vector<long long> arr(n);
        for(int i =0; i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int a = n-k;
        for(int i =k; i<a;i++){
            sum += arr[i];
            avg = sum/(n-2*k);
            cout<<fixed<<setprecision(6)<<avg<<endl;
           
        }
    }







    return 0;
}