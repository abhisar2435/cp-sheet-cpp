#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int>mp={{"Ocelot",1},{"Serval",2},{"Lynx",3}};
    string s,t;
    cin>>s>>t;
    if(mp[s]>=mp[t])cout<<"Yes\n";
    else cout<<"No\n";
    
    return 0;
}