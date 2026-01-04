#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s,p;
        cin>>s>>p;
        map<char,int>mp1,mp2;
        for(char ch :s) mp1[ch]++;
        for(char ch :p) mp2[ch]++;

        bool  ok=true ;
        for (auto &p :mp1){
            char key=p.first;
            int val=p.second;

            if(!mp2.count(key) || mp2[key]<val) {
                cout<<"Impossible\n";
                ok=false;
                break;
            }
            mp2[key]-=val;
            if(mp2[key]==0) mp2.erase(key);

        }
        if(ok){
            cout<<s;
            for(auto &p: mp2) cout<<string(p.second,p.first);
            cout<<endl;
        }

    }
    return 0;
}