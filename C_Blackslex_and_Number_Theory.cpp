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
        vector<ll>a(n);
        for(auto &x:a) cin>>x;
        sort(a.begin(),a.end());
        
        cout<<max(a[0],a[1]-a[0])<<endl;
    }
    return 0;
}