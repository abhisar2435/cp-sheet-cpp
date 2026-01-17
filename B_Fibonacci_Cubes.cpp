#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>dp(n);
        if(n>2){
            dp[0]=1,dp[1]=2;
            for(int i =2;i<n;i++){
                dp[i]=dp[i-1]+dp[i-2];
            }
        }
        if(n==1) dp[0]=1;
        if(n==2) {dp[0]=1,dp[1]=2;}
        string ans="";
        while(m--){
            int w,l,h;
            cin>>w>>l>>h;
            int maxi=max({w,l,h}), mini=min({w,l,h});
            int x=dp[n-1]+dp[n-2];
            if(maxi>=x && mini>=dp[n-1]) ans+="1";
            else ans+="0";
        }
        cout<<ans<<endl;
        
    }
    return 0;
}