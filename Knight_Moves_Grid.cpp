#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>>a(n,vector<int>(n,-1));
    vector<pair<int,int>>p={
        {-2,1},{-2,-1}, {2,-1},{2,1},
        {-1,2},{-1,-2}, {1,-2},{1,2}
    };

    queue<pair<int,int>>q;
    
    q.push({0,0});
    a[0][0]=0;
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();

        for(auto [dx,dy] :p){
            int nx=x+dx;
            int ny=y+dy;
            if(nx <0 || nx>=n || ny <0 || ny >=n) continue;
            if(a[nx][ny]==-1){
                a[nx][ny]=a[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}