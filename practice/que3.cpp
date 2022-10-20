#include <bits/stdc++.h>
using namespace std;
// void insertNum(vector<int> &v, int temp)
// {
//     if (v.size() == 0 || v[v.size() - 1] <= temp)
//     {
//         v.push_back(temp);
//         return;
//     }
//     int val = v[v.size() - 1];
//     v.pop_back();
//     insertNum(v,temp);
//     v.push_back(val);

//     return;
// }
// void sort(vector<int> &v)
// {
//     if (v.size() == 1)
//         return;

//     int temp = v[v.size() - 1];
//     v.pop_back();
//     sort(v);

//     insertNum(v, temp);
//     return;
// }
void insertRecur(stack<int> &s,int temp){
    if(s.empty()){
        s.push(temp); return;
    }
    else if(s.top()<=temp){
        s.push(temp); return;
    }

    int val = s.top();
    s.pop();
    insertRecur(s,temp);
    s.push(val);
    return;
}


void sortRecur(stack<int> &s){
    if(s.size()==1) return;

    int temp = s.top();
    s.pop();
    sortRecur(s);
    
    insertRecur(s,temp);
    return;
}
