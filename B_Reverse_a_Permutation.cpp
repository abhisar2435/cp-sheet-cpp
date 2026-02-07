#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    ll n;
    cin>>n;
    vector<ll>p(n);
    for(auto &x:p) cin>>x;
    ll l=0,r=n-1,temp=n;

    while(l<=r){
        if(p[l]==temp){
            temp--;
            l++;
        }

        else if(p[r]==temp) {
            reverse(p.begin()+l,p.begin()+r+1);
            break;
        }
        else r--;
    }


    for(ll i :p) cout<<i<<" ";
    cout<<endl;
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