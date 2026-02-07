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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int>hash(n+1);
        int sign=1;
        for(int i :a){
            hash[i]=sign;
            if(sign==0) sign=1;
            else sign=0;
        }
        bool ans=true;
        for(int i=1;i<=n-1;i++) if(hash[i]==hash[i+1]) {ans=false;break;}
        if (ans==false) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}