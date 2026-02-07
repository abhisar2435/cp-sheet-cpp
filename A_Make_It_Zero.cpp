#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    if(n&1){
        cout<<4<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<n<<endl;
        cout<<2<<" "<<n<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    return;

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