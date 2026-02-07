#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char,int>mp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++) mp[s[i]]++;
    for(auto &p:mp){if(p.second==1) {cout<<p.first<<endl;break;}}
    return 0;
}