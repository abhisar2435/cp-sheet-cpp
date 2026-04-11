#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;

    sort(a.rbegin(),a.rend());
    ll l=0,r=0;
    for (ll i=0;i<n;i++){
        if(l<=r) l+=a[i];
        else r+=a[i];
    }
    cout<<abs(l-r)<<endl;
    return 0;

}
