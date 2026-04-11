#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;
    vector<long long>h(n),t(m);
    for(long long i=0;i<n;i++) cin>>h[i];
    for(long long i=0;i<m;i++)cin>>t[i];

    sort(h.begin(),h.end());
    
    return 0;
}
