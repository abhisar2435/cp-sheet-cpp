#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 == 1) {
            cout << "NO\n";
            continue;
        }
        vector<char> st;
        for (char c : s) {
            if (!st.empty() && st.back() == c) {
                st.pop_back();
            } else {
                st.push_back(c);
            }
        }
        cout << (st.empty() ? "YES\n" : "NO\n");
    }

    return 0;
}