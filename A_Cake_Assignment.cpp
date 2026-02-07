#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int k,x;
        cin>>k>>x;
        ll a1=pow(2,k),b1=pow(2,k),a2=pow(2,k+1)-x,b2=x;
        if(a1==a2 && b1==b2) {cout<<0<<endl<<" "<<endl;continue;}
        
        cout<<a1<<b1<<a2<<b2<<endl;
    }
    return 0;
}