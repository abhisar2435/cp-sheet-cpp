// Problem Link : 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define fr(i,a,b) for(ll i=0;i<n;i++)
#define pb push_back
#define ff first
#define ss second
const int MOD = 1e9+7;
const int INF = 1e9;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        string s;
        cin>>s;
        vll cnt1,cnt0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0')cnt1.pb(i);
            else cnt0.pb(i);
        }
        // if(cnt1.size()==0 || cnt0.size()==0) {cout<<0<<endl;continue;}
        // else{
        //     ll ans=0;
        //     for(ll i:cnt0){
        //         if(i<cnt1[0])continue;
        //         else{
        //             ans+= (i-cnt1[0]+1);
        //             cnt1[0]++;

        //         }
        //     }
        //     cout<<ans<<endl;
        // }
        for(ll i:cnt0)cout<<i<<" ";
        cout<<endl;
        for(ll i:cnt1)cout<<i<<" ";
        cout<<endl;
        

    }
    return 0;
}