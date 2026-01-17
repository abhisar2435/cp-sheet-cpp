#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>ones;
        for(int i=0;i<n;i++) if(s[i]=='1') ones.push_back(i);

        if(k==1 && ones.size()>0){
            cout<<"NO\n";
            continue;
        }


        int cons=1;
        bool ans=true;
        for(int i=1;i<(int)ones.size();i++){
            if(ones[i]==ones[i-1]+1) cons++;
            else cons=1;
            if(cons>=k) {ans=false; break;}
        }
        if(ans==false ) {cout<<"NO\n";continue;}
        else {
        cout<<"YES\n";
        int mini=1,maxi=n;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1') cout<<mini++<<" ";

            else cout<<maxi--<<" ";
        }
        cout<<endl;}
    }
    return 0;
}