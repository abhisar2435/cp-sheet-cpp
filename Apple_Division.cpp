#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    ll  total=accumulate(a.begin(),a.end(),0LL);

    ll ans=LLONG_MAX;
    for(int mask=0;mask<(1<<n);mask++){
        ll sum=0;
        for(int i=0;i<n;i++){
            if(mask &(1<<i)){
                sum+=a[i];
            }
        }
        long long diff=abs(total- 2*(sum));
        ans=min(ans,diff);
    }
    cout<<ans<<endl;

    return 0;

}
