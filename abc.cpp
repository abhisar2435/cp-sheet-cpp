#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=2;
    vector<int>dp(n);
    if(n>2){
    dp[0]=1,dp[1]=2;
    for(int i =2;i<n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    }
    if(n==1) dp[0]=1;
    if(n==2) {dp[0]=1,dp[1]=2;}
    for(int i: dp) cout<<i<<" ";
    cout<<endl;
    return 0;
}