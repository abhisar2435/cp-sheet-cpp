// * =42, < =60 , > =62
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        if(s.size()==1) {cout<<1<<endl; continue;}

        vector<int>star,l,r;
        for(int i=0;i<s.size();i++){
            if(s[i]=='<')  l.push_back(i);
            else if(s[i]=='>') r.push_back(i);
            else star.push_back(i);
        }

        if(star.size()>1) {cout<<-1<<endl;continue;}

        int ans=0,left=l.size(),right=r.size();

        for(int i=0;i<s.size()-1;i++){
            if((s[i]=='>' && (s[i+1]=='<' ||  s[i+1]=='*')) || (s[i]=='*' && s[i+1]=='<' )){
               ans-=1;
               break;
            }
            if(s[i]=='<' && s[i+1]=='*') left++;
            if(s[i]=='*' && s[i+1]=='>') right++;

        }
        if(ans==-1) cout<<-1<<endl;
        else cout<< max(left,right)<<endl;


    }
    return 0;
}