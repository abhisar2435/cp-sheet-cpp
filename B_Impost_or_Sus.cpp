#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    string s;
    cin>>s;
    ll cnt=0,n=s.size();
    if(s[0]=='u'){cnt++;s[0]='s';}
    if(s[n-1]=='u'){cnt++;s[n-1]='s';}
    ll i=1;
    while(i<n-1){
        if(s[i]=='s') i++;
        if(s[i]=='u') {
            if(s[i-1]=='u') {s[i-1]='s'; cnt++;}
            if(s[i+1]=='u') {s[i+1]='s'; cnt++;}
            i+=2;
        }
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