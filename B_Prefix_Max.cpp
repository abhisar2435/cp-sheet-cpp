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
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            maxi=max(maxi,a);
        }
        cout<<maxi*n<<endl;
    }
    return 0;
}