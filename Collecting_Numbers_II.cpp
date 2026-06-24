#include <bits/stdc++.h>
using namespace std;
#define endl'\n'
#define vi vector<int>

void solve() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> pos;
    pos[0] = 0;
    pos[n + 1] = n + 1;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) rounds++;
    }
    while (m--) {
        int i, j;
        cin >> i >> j;
        if (i > j) swap(i, j);
        int x = arr[i];
        int y = arr[j];
        if (pos[x + 1] > i && pos[x + 1] < j) rounds++;
        if (pos[x - 1] > i && pos[x - 1] < j) rounds--;
        if (pos[y + 1] > i && pos[y + 1] < j) rounds--;
        if (pos[y - 1] > i && pos[y - 1] < j) rounds++;

        //> case when consecutive elements
        if (x == (y + 1)) rounds--;  // {...,2,...,1,...}
        if (x == (y - 1)) rounds++;  // {...,1,...,2,...}
        cout << rounds << endl;
        swap(arr[i], arr[j]);
        pos[x] = j;
        pos[y] = i;
    }
}//* T: O(n + m), S:O(n)
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
}