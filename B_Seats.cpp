#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1 || n==2){cout<<1<<endl;return;}
    if(s[0]=='0' && s[1]=='0')s[1]='1';
    if(s[n-1]=='0' && s[n-2]=='0')s[n-2]='1';  
    
    ll cnt=0,prev=-1;
    for(ll i=0;i<n;i++){
        if(s[i]!='1'){
            if(i-prev>= 3) {s[i]='1';cnt++;prev=i;}

        }
        else {cnt++; prev=i;}
    }
    cout<<cnt<<endl;

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}