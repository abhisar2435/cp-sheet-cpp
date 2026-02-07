#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n),b(m);
        for(auto &x :a)cin>>x;
        for(auto &x:b)cin>>x;
        string s;
        cin>>s;
        vector<int>ans(k,n);

        for(int i=0;i<k;i++){
            int p=1;
            if(s[i]=='L') p= (-1);
            else p= 1;
            for(int j=0;j<n;j++){
                if(a[j]==0) continue;
                a[j]+=p;
                for(int o=0;o<m;o++) {
                    if(a[j]==a[o]) {a[j]==0 ; ans[i]--;}

                }
            }
        }
        for(int i :ans) cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}