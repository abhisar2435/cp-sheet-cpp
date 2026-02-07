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
        vector<ll>dp(n+1,1e9),cnt(n+1);
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            cnt[x]++;
            dp[x]=1;
        }
        for(ll i=0;i<=n;i++){
            if(cnt[i]==0)continue;
            for(ll j=i;j<=n;j+=i){
                if(dp[j/i]!=1e9) {dp[j]=min(dp[j],dp[j/i]+1);}
            }
        }
        
        for(ll i=1;i<n+1;i++){
            if(dp[i]==1e9) cout<<-1<<" ";

            else cout<<dp[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}