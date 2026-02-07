#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n+1);
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    vector<vector<int>> g(n+1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> dist(n+1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int nei : g[node]){
            if(dist[nei] == -1){
                dist[nei] = dist[node] + 1;
                q.push(nei);
            }
        }
    }

    vector<int> ans(k+1, 0);

    for(int i = 1; i <= n; i++){
        int product = a[i];
        ans[product] = max(ans[product], dist[i]);
    }

    for(int i = 1; i <= k; i++)
        cout << ans[i] << " ";
}
