#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,o,c;
    cin>>r>>o>>c;
    int over = 20-o;
    int hit = over*6;
    int run = hit*6;
    int score = c+run;
    if(score > r){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}