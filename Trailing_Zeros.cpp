// Problem Link : https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll ans=0;
    while (n>0){
        ll r=n/5;
        ans+=r;
        n=r;
    }
    cout<<ans<<endl;
    return 0;
}