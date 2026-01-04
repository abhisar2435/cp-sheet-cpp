#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long  n;
        cin>>n;
        vector<long long >a(n),b(n);
        for(auto &x: a) cin>>x;
        for(auto &x :b) cin>>x;
        long long mx=0,mn=0;

        for(long long  i=0;i<n;i++){
            long long  new_mx=max(mx- a[i],b[i]-mn);
            long long  new_mn=min(mn-a[i] ,b[i]-mx);
            mx=new_mx;
            mn=new_mn;

        }
        cout<<mx<<endl;

    }
    return 0;
}