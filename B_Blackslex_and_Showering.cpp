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
        vector<ll>a(n),ab;
        for(auto &x:a)cin>>x;
        ll sum=0;
        for(ll i=0;i<n-1;i++) sum+=abs(a[i]-a[i+1]);
        ll ans=min(sum-abs(a[0]-a[1]),sum-abs(a[n-1]-a[n-2]));
        for(ll i=1;i<n-1;i++){
            ans=min(ans,sum-abs(a[i]-a[i+1])-abs(a[i]-a[i-1])+abs(a[i-1]-a[i+1]));

        }
        cout<<ans<<endl;
    }
    return 0;
}