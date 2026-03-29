// Problem Link : https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for(char ch:s) freq[ch-'A']++;
    ll odcnt=0;
    string odchar;
    for(ll i=0;i<26;i++){
        if( freq[i]&1){ odcnt++; odchar=char('A'+i);}
    }

    if(odcnt>1) {cout<<"NO SOLUTION\n"; return 0;}
    string left="" , middle="",right="";
    for(int i=0;i<26;i++){
        if(freq[i]%2==1) middle+=string(freq[i], char('A'+i));
        else left+=string(freq[i]/2,char('A'+i));
    }
    right=left;
    reverse(right.begin(),right.end());
    cout<<left<<middle<<right<<endl;
    return 0;
}