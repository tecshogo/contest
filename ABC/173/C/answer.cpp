#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回

// 参考にした回答
// https://atcoder.jp/contests/abc173/submissions/15024500

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i, h) cin >> s.at(i);

    int ans = 0;
    rep(is, 1 << h) rep(js, 1 << w) {
        int cnt = 0;
        rep(i, h) rep(j, w) {
            if (is >> i & 1) continue;
            if (js >> j & 1) continue;
            if (s.at(i).at(j) == '#') cnt++;
        }
        if (cnt == k) ans++;
    }
    
    cout << ans << endl;

    return 0;
}
