#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
bool good(ll x){
    return x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0;
}
ll get_naive(ll x){
    ll cnt=0;
    ll block= x/210;
    ll rem= x%210;
    for(ll i=1;i<=210;i++){
        if(good(i))cnt++;
    }
    ll ans= block*cnt;
    for(ll i=1;i<=rem;i++){
        if(good(i))ans++;
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        cout<<get_naive(r)- get_naive(l-1)<<endl;
    }

    return 0;
}