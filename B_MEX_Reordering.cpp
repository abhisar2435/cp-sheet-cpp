#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x :a) cin>>x;
        sort(a.begin(),a.end());
    
        int cnt0=0,cnt1=0;
        for(int i:a){
            if(i==0) cnt0++;
            if(i==1) cnt1++;

        }
        if(n ==2){
            if(cnt0==1) cout<<"YES\n";
            else cout<<"NO\n";
        }

        if(n>2){
            if(cnt0>=1 && cnt1>=1 ) cout<<"YES\n";
            else if(cnt0==1 && cnt1==0) cout<<"YES\n";
            else cout<<"NO\n";
        
        }
        
    }
    return 0;
}