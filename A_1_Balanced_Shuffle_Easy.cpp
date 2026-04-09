#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<tuple<int,int,char>>v;
    int b=0;
    for(int i=0;i<s.size();i++){
        v.push_back({b,i,s[i]});
        if(s[i]=='(') b++;
        else b--;

    }
    sort (v.begin(),v.end(),[](auto &a,auto &b){
        if(get<0>(a)!=get<0>(b)){
            return get<0>(a)< get<0>(b);
        }
        else return get<1>(a)>get<1>(b);
    });
    for(auto &x:v){
        cout<<get<2>(x);
    }
    return 0;
}