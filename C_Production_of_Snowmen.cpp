#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
bool check(const vector <ll>&a,const vector<ll>&b,ll j,ll k, ll n){
    for(ll i=0;i<n;i++){
        if(a[(i+j)%n]>=b[(i+k)%n]) return false ;
    }
    return true;

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n),c(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        for(auto &x:c)cin>>x;

        ll c1=0,c2=0;
        for(ll i=0;i<n;i++){
            if(check(a,b,i,0,n)) c1++;
        }
        for(ll i=0;i<n;i++){
            if(check(b,c,0,i,n)) c2++;
        }
        cout<<c1*c2*n<<endl;

    }
    return 0;
}