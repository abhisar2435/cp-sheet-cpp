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
        deque<int>q[n+1];
        vector<int>dp(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];

        for(int i=1;i<=n;i++) q[i].clear();

        for(int i=1;i<=n;i++){
            dp[i]=dp[i-1];
            q[a[i]].emplace_back(i);
            if (q[a[i]].size() > a[i]) q[a[i]].pop_front();
			if (q[a[i]].size() == a[i]) dp[i] = max(dp[i], dp[q[a[i]].front() - 1] + a[i]);
            
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}