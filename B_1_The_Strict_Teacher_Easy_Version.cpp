#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n,m,q;
        cin>>n>>m>>q;
        long long t1,t2,d;
        cin>>t1>>t2>>d;
        if(t1> t2) swap(t1,t2);
        if(d<t1) {
            cout<<t1-1<<endl;
            continue;
        }
        if(d>t2){
            cout<<n-t2<<endl;
            continue;
        }
        cout<<(t2 -t1)/2<<endl;
    }
    return 0;
}