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
        ll n;
        cin>>n;
        vll a(n);
        for(auto &x:a)cin>>x;
        sort(all(a));
        ll f=0;
        for(ll i:a){
            if (i==1) {f=1;break;}
        }
        if(f==1){cout<<"Yes\n";continue;}
        else {
            vll b;
            for(ll i=1;i<a.size();i++){
                if(a[i] %a[0] !=0) b.pb(a[i]);
            }
            sort(all(b)); 
            bool ans=true;
            if(b.empty()){
                cout<<"Yes\n";
                continue;
            }
            for(ll i:b){
                if(i %b[0]!=0){
                    ans=false;
                    break;
                }
            }
            cout<<(ans?"Yes\n":"No\n");
        }
    }

    return 0;
}
