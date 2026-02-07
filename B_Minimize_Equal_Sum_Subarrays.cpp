#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>p(n);
        for(auto &x :p) cin>>x;
        rotate(p.begin(),p.begin()+1,p.end());
        for(int i :p) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}