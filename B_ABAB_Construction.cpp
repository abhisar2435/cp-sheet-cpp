#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans=true;
        if((n&1) && s[0]=='b') ans=false;
        int start=n%2;
        for(int i=start;i<n-1;i+=2){
            if(!(s[i]=='?' ||s[i]!=s[i+1]))ans=false;
        }
        cout<<(ans?"YES\n":"NO\n");

    }
}