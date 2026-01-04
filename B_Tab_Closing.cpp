#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long  a,b,n;
        cin>>a>>b>>n;
        if(b*n <=a || a==b) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}