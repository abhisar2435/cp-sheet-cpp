#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    const int MX = 1000000;
    vector<int> freq(MX + 1, 0);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    for(int d = MX; d >= 1; d--) {
        int cnt = 0;
        for(int multiple = d; multiple <= MX; multiple += d) {
            cnt += freq[multiple];
        }
        if(cnt >= 2) {
            cout << d << '\n';
            return 0;
        }
    }
}