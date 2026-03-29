// Problem Link : 
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if (i == 0 && s[i] == '9') continue;
        int a=s[i] -'0';
        if(a> 9-a) s[i]=('0' +9-a);
    }
        
    cout<<s<<endl;
    return 0;
}