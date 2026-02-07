#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>a(n);
        for(auto &x :a)cin>>x;
        long long sum=0;
        for (int i:a) sum+=i;
        
        if(sum>s || (s-sum) %x!=0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}