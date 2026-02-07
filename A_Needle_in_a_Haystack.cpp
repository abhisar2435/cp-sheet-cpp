#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s,t;
        cin>>s>>t;
        map<char,int>mp1,mp2;
        for(char ch :s) mp1[ch]++;
        for(char ch :t) mp2[ch]++;

        bool  ok=true ;
        for (auto &x :mp1){
            char key=x.first;
            int val=x.second;

            if(!mp2.count(key) || mp2[key]<val) {
                cout<<"Impossible\n";
                ok=false;
                break;
            }
            mp2[key]-=val;
            if(mp2[key]==0) mp2.erase(key);
        }
        if(ok){
            string p="",ans="";
            for(auto &x: mp2) {
                while(x.second>0) {
                    p+=x.first;
                    x.second --;
                }

            }
            int i=0,j=0;
            while(i<s.size() && j<p.size()){
                if(s[i]<=p[j])ans+=s[i++];
                else ans+= p[j++];
            }
            while(i<s.size())ans+=s[i++];
            while (j<p.size()) ans+=p[j++];
            cout<<ans<<endl;
        }

    }
    return 0;
}