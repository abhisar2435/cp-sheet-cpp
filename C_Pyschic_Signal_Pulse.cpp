#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        deque<int> mindq;
        deque<int> maxdq;

        int l = 0, ans = 0;

        for (int r = 0; r < n; r++) {
            while (!maxdq.empty() && a[maxdq.back()] <= a[r])
                maxdq.pop_back();
            maxdq.push_back(r);

            while (!mindq.empty() && a[mindq.back()] >= a[r])
                mindq.pop_back();
            mindq.push_back(r);

            while (!mindq.empty() && !maxdq.empty() &&
                   (a[maxdq.front()] - a[mindq.front()]) > k) {
                if (mindq.front() == l) mindq.pop_front();
                if (maxdq.front() == l) maxdq.pop_front();
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        cout << ans << "\n";
    }

    return 0;
}