#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,sum =0;
        cin>>a>>b>>c;
        if(b == c){
            sum = b+c;
            if(sum == a){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }

        
    }





    return 0;
}