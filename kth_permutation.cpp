#include <bits/stdc++.h>
using namespace std;

string kth_perm(string s, long long k) {
    int n = s.size();
    vector<long long> fact(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i;

    sort(s.begin(), s.end()); 
    string ans = "";

    for (int i = n; i >= 1; i--) {
        long long block = fact[i - 1];
        long long idx = k / block;
        k %= block;

        ans.push_back(s[idx]);
        s.erase(s.begin() + idx);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, j, k;
        cin >> n >> j >> k;

        string s = to_string(n);
        int len = s.size();

        long long fact = 1;
        for (int i = 2; i <= len; i++) fact *= i;

        // Input is 1-indexed (based on expected output)
        j--, k--;

        // keep safe
        j %= fact;
        k %= fact;

        string p1 = kth_perm(s, j);
        string p2 = kth_perm(s, k);

        int A = 0;
        for (int i = 0; i < len; i++) {
            if (p1[i] == p2[i]) A++;
        }
        int B = len - A;

        cout << A << "A" << B << "B\n";
    }
    return 0;
}
