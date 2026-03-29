#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        deque<ll>dq;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            dq.push_back(x);
        }
        string s;
        ll ans,turn=1;
        
        while(!dq.empty()){
            if(turn%2==1){
                if(dq.front()>dq.back()) {s+="L";ans=dq.front();dq.pop_front();}
                else {s+="R";ans=dq.back();dq.pop_back();}
            }
            else{
                if(dq.front()<dq.back()) {s+="L";ans=dq.front();dq.pop_front();}
                else {s+="R";ans=dq.back();dq.pop_back();}
            }
            turn ++;
        }
        cout<<s<<endl;
    }
    return 0;
}