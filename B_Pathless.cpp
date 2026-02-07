#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>a(3);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    if(s==a[1]+2*a[2] || s>=a[1]+2*a[2]+2) {cout<<-1<<endl; return;}
    for(int i=0;i<a[0];i++) cout<<0<<" ";
    for(int i=0;i<a[2];i++) cout<<2<<" ";
    for(int i=0;i<a[1];i++) cout<<1<<" ";
    cout<<endl;
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
