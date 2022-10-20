#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n>1 && k<=1){
            cout<<-1<<endl;
            
        }else{
            for(int i=1;i<=n;i++){
                if(i ==k){
                    cout<<n<<" ";
                }
                if(i<n)
                cout<<i<<" ";
            }
            cout<<endl;
        }
    


    }




    return 0;
}