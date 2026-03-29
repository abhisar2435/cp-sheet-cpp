// Problem link : https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll y,x;
        cin>>y>>x;
        ll maxi=max(y,x);
        ll diff=0;
        if(maxi&1) diff=(abs(1-y)+ abs(maxi-x));
        else diff=(abs(maxi-y)+ abs(1-x));
        
        __int128 ans=(__int128)maxi*maxi -diff;

        cout<<(long long)ans<<'\n';
    }
    return 0;
}