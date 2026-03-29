#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll>a(n);
    
    vector<ll>ad(n);
    vector<ll>lastv(n,1);
    ll currv=1;
    for(auto& i:a) cin>>i;
    while(m--){
        ll b,c;
        cin>>b>>c;
        b--;
        if(lastv[b]!=currv) {
            ad[b]=0;
            lastv[b]=currv;
        }
        if(a[b]+ad[b]+c>h){
            currv++;
        }
        else ad[b]+=c;

    }
    for(ll i=0;i<n;i++){
        if(lastv[i]!=currv)ad[i]=0;
        cout<<a[i]+ad[i]<<" ";
    }
    cout<<endl;
    return;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}