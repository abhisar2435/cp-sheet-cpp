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
        vector<int>a(n);
        for(auto &x :a)cin>>x;

        int m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if(s.size() !=n) {cout<<"NO\n";continue;}


            map<char,int>c2v;
            map<int,char>v2c;
            bool ok=true;
            for(int i=0;i<n;i++){
                char ch=s[i];
                int val=a[i];
                
                if(c2v.count(ch) && c2v[ch]!=val) ok=false;
                if(v2c.count(val) && v2c[val]!=ch) ok=false;
                c2v[ch]=val;
                v2c[val]=ch;
            }
            cout<<(ok ?"YES": "NO" )<<endl;
        }
    }
    return 0;
}