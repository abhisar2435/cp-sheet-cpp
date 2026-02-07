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
        ll x,y;
        cin>>x>>y;
        for(int i=0;i<30;i++){
            if((x&(1<<i)) !=(y&(1<<i))) {
                cout<<(1ll<<i)<<endl;
                break;
            }

        }
    }
    return 0;
}