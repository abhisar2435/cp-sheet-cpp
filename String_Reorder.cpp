#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    vector<int> freq(26, 0);
    for (char c:s) freq[c-'A']++;

    int n = s.size();
    int mx = *max_element(freq.begin(), freq.end());
    if (mx >(n+1)/2) {
        cout<<-1<<'\n';
        return 0;
    }
    string ans = "";
    for (int pos=0;pos<n;pos++) {
        for(int c=0;c<26;c++) {
            if (freq[c] == 0) continue;
            if (!ans.empty() && ans.back() == char('A' + c)) continue;

            freq[c]--;
            int rem = n - pos - 1;
            int mxFreq = *max_element(freq.begin(), freq.end());
            if (mxFreq <= (rem + 1) / 2) {
                ans += char('A' + c);
                break;
            }
            freq[c]++;
        }
    }
    cout << ans << '\n';
}