#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    vector<string>ans;
    sort(s.begin(),s.end());
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<ans.size()<<endl;
    for( auto i : ans)cout<<i<<endl;

    return 0;
}