#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    const int MAX = 35;
    ll C[MAX][MAX] = {};
    for (int n = 0; n < MAX; n++) {
        C[n][0] = C[n][n] = 1;
        for (int r = 1; r < n; r++)
            C[n][r] = C[n-1][r-1] + C[n-1][r];
    }

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        int d = 0;
        while ((1LL << d) < n) d++;

        ll win = 0;

        for (int i = 0; i <= d - 1; i++) {
            int limit = (int)(k - i - 1);      
            if (limit < 0) continue;
            limit = min(limit, i);
            for (int j = 0; j <= limit; j++)
                win += C[i][j];
        }

        
        if ((ll)d + 1 <= k) win++;

        cout << (n - win) << "\n";
    }
    return 0;
}
