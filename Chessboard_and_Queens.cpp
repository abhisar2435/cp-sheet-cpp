#include <bits/stdc++.h>
using namespace std;
vector<string>board(8);
int cnt=0;
bool col[8],diag1[15],diag2[15];
void solve(int rows){
    if(rows==8){
        cnt++;
        return;
    }
    for(int c=0;c<8;c++){
        if(board[rows][c]=='*')continue;
        if(col[c]||diag1[rows+c]|| diag2[rows -c+7]) continue;
        col[c]=diag1[rows+c]=diag2[rows -c+7]=true;

        solve(rows+1);
        col[c]=diag1[rows+c]=diag2[rows -c+7]=false;
    }
}
int main() {
    for(int i=0;i<8;i++)cin>>board[i];
    solve(0);
    cout<<cnt<<endl;
    return 0;
}