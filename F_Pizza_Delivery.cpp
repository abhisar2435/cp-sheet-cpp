#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
ll dist(pair<ll,ll> a, pair<ll,ll> b){
    return llabs(a.first - b.first) + llabs(a.second - b.second);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n,ax,ay,bx,by;
        cin>>n>>ax>>ay>>bx>>by;
        map<ll, ll>top,bot;
        top[ax]=bot[ax]=ay;
        top[bx]=bot[bx]=by;

        vector<ll>xc(n),yc(n);
        for(auto &x:xc)cin>>x;
        for(auto &x:yc)cin>>x;
        for(ll i=0;i<n;i++){
            if(!top.count(xc[i])){
                top[xc[i]]=bot[xc[i]]=yc[i];
                continue;

            }
            top[xc[i]]=max(top[xc[i]],yc[i]);
            bot[xc[i]]=min(bot[xc[i]],yc[i]);

        }
        vector<pair<ll,ll>>top_pts,bot_pts;
        for(auto &[x,y]:top){
            top_pts.push_back({x,y});

        }
        for(auto &[x,y]:bot){
            bot_pts.push_back({x,y});
        }
        n=top_pts.size();
        vector<vector<ll>>dp(n,vector<ll>(2,LLONG_MAX/10));
        dp[0][0]=dp[0][1]=0;
        for(ll i=1;i<n;i++){
            for(ll j=0;j<2;j++){
                for(ll k=0;k<2;k++){
                    auto prev_pt=(k? top_pts[i-1]:bot_pts[i-1]);
                    auto cur_pt=(j?bot_pts[i]:top_pts[i]);
                    dp[i][j]=min(dp[i][j],dp[i-1][k]+dist(prev_pt,cur_pt)+top_pts[i].second - bot_pts[i].second);
                }
            }
        }
        cout<<dp[n-1][0]<<"\n";

    }
    return 0;
}