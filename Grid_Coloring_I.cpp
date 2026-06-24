#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >>n>>m;
    vector<string>g(n);
    for (int i=0; i<n; i++) {
        cin >> g[i];
    }
    vector<string> ans(n, string(m, ' '));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                ans[i][j] = (g[i][j] == 'A' ? 'B' : 'A');
            } else {
                ans[i][j] = (g[i][j] == 'C' ? 'D' : 'C');
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}