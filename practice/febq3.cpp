#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n,r,R;
    cin>>n>>r;
    
    for(int i =0; i<n;i++){
        cin>>R;
        if(R<r)
            cout<<"Bad boi"<<endl;
        else
            cout<<"Good boi"<<endl;
    }




    return 0;
}