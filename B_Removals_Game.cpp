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
        vector<int>a(n),b(n);
        for(auto &x :a)cin>>x;
        for(auto &x :b)cin>>x;

        if(a==b) {cout<<"Bob\n";continue;}
        reverse(a.begin(),a.end());
        if(a==b) {cout<<"Bob\n";continue;}
        else cout<<"Alice\n";

    }
    return 0;
}