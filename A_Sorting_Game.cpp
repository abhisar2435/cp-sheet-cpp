#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string t=s;
        sort(t.begin(),t.end());
        if(s==t){ cout<<"Bob\n"; continue;}
        vector<ll >idx;
        for(ll i=0;i<n;i++){
            if(s[i]!=t[i]) idx.push_back(i+1);

        }
        cout<<"Alice\n";
        cout<<idx.size()<<endl;
        for(ll i:idx) cout<<i<<" ";
        cout<<endl;
    
        
    }
    return 0;
}