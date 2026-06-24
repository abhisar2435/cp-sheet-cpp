#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, k, p, m;
        cin >> n >> k >> p >> m;
        vll a(n);
        for(auto &x:a) cin>>x;
        multiset<ll>ops;
        for(int i=0;i<k-1;i++) ops.insert(a[i]);
        for(int i=k-1;i<p-1;i++){
            ops.insert(a[i]);
            m-=*ops.begin();
            ops.erase(ops.begin());
        }
        m-=a[p-1];
        if(m<0){ cout<<0<<endl;continue;}
        ll sum=a[p-1];
        ops.clear();
        for(int i=0;i<n;i++) if(i!=p-1)ops.insert(a[i]);
        for(int i=0;i<n-k;i++){
            sum+=*ops.begin();
            ops.erase(ops.begin());
        }
        cout<< 1+ (m/sum)<<endl;
    }
    return 0;
}