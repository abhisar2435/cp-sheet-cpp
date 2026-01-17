#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int l1,l2,r1,r2;
        cin>>l1>>r1>>l2>>r2;
        int inter =min(r1,r2)- max(l1,l2)+1;
        if(inter <=0) cout<<1<<endl;
        else {
            int ans=inter-1;
            ans+=(l1!=l2);
            ans+=(r1!=r2);
            cout<<ans<<endl;
        }
    }
    return 0;
}