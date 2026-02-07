#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(auto &x:a) cin>>x;
        vector<ll>pref(n),maxi(n);
        pref[0]=a[0];
        maxi[0]=a[0];
        ll cnt=0;
        if(pref[0]==0) cnt++;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+a[i];
            maxi[i]=max(maxi[i-1],a[i]);
            if(pref[i]==maxi[i]*2) cnt++;
        }
        cout<<cnt<<endl;


    }
    return 0;
}

