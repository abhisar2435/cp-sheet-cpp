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
        if (k==(n*n -1)){cout<<"NO\n";continue;}
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            string ans="";
            for(int j=0;j<n;j++){
                if(k>0){
                    ans+="U";
                    k--;
                }
                else if(i==n-1 && j==n-1) ans+="L";
                else if(i==n-1) ans+="R";
                else ans+="D";

            }
            cout<<ans<<endl;
        }
    }
    return 0;
}