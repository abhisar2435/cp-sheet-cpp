// Problem Link : 
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m,d;
        cin>>n>>m>>d;

        ll a=d/m;
        if(d<m){cout<<n<<endl;continue;}
        ll ans = (n + a) / (a + 1);
        cout<<ans<<endl;
    }
    return 0;
}