#include <bits/stdc++.h>
using namespace std;
string kth(string s, long long j){
    int n=s.size();
    vector<long long>fact(n+1);
    fact[0]=fact[1]=1;
    for(int i=1;i<=n;i++) fact[i]=fact[i-1]*i;
    sort(s.begin(),s.end());

    string ans="";
    for(int i=n;i>=1;i--){
        long long block=fact[i-1];
        long long idx= j/block;
        j%=block;
        ans.push_back(s[idx]);
        s.erase(s.begin()+idx);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n,j,k;
        cin>>n>>j>>k;
        string s=to_string(n);
        int x=s.size();
        long long fact=1;
        for(int i=1;i<=x;i++) fact*=i;
        j--;k--;
        j%=fact;
        k%=fact;

        string p=kth(s,j);
        string q=kth(s,k);
        int a=0;
        for(int i=0;i<x;i++){
            if(p[i]==q[i])a++;
        }    
        cout<<a<<"A"<<x-a<<"B\n";


    }
    return 0;
}