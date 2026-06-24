#include <bits/stdc++.h>
using namespace std;

int main() {
    int  n ;
    cin>>n;
    vector<pair<int,int>>movies(n);
    for(int i=0;i<n;i++){
        cin>>movies[i].first>>movies[i].second;
    }
    sort(movies.begin(),movies.end(),[](auto &a,auto &b){
        return a.second<b.second;
    });
    int last =0,cnt=0;
    for(auto &m:movies){
        if(m.first>=last){
            cnt++;
            last=m.second;
        }
    }
    cout<<cnt<<endl;
    return 0;
    
}