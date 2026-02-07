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
        ll n,m;
        cin>>n>>m;
        // vector<ll>a(n),b(m);        
        // for(auto &x:a) cin>>x;
        // for(auto &x:b) cin>>x;
        priority_queue<ll>a,b;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push(x);
        }
        for(int i=0;i<m;i++){
            ll x;
            cin>>x;
            b.push(x);
        }




        ll turn=1;
        while(!a.empty() && !b.empty()){
            ll x=a.top(),y=b.top();
            if(turn%2==1) {
                if(y<=x) b.pop();
                else {
                    b.pop();
                    y=y-x;
                    b.push(y);
                }
            }
             else {
                if(x<=y) a.pop();
                else {
                    a.pop();
                    x=x-y;
                    a.push(x);
                }
            }
            turn ++;
        }
        cout<<(a.empty() ?"Bob":"Alice")<<endl;

    }
    return 0;
}