#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    vector<string>r,x,m;
    string ab="";
    while (t--) {
        string a,b;
        cin>>a>>b;
        if(b=="rat") r.push_back(a);
        if(b=="woman" || b=="child") x.push_back(a);
        if(b=="man") m.push_back(a); 
        if(b=="captain") ab=a;

    }
    for(auto i:r) cout<<i<<endl;
    for(auto i:x) cout<<i<<endl;
    for(auto i:m) cout<<i<<endl;
    cout<<ab<<endl;

    return 0;
}