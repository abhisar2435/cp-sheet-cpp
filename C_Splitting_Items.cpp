#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(auto &x: a) cin>>x;
        sort(a.begin(),a.end(),greater<ll>());
        ll  score=0,rem=k;

        for (ll i=0;i<n;i++) {
            if(i%2==0) score+=a[i];
            else{
                ll need= min(rem,a[i-1]-a[i]);
                a[i]+=need;
                rem-=need;
                score-=a[i];
            }
        }
        cout<<score<<endl;

    }
    return 0;
}