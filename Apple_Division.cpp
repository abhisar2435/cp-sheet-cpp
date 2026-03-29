#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    ll lsum=0,rsum=0,diff=0;
    for(ll i=n-1;i>=1;i-=2){
        if(diff<=0) {
            lsum+=a[i];rsum+=a[i-1];
        }
        else {
            lsum+=a[i-1];rsum+=a[i];
        }
        diff= lsum-rsum;

    }
    // cout<<abs(lsum-rsum)<<endl;
    for(ll i :a)cout<<i<<" ";


    return 0;
}