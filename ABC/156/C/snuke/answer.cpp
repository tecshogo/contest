#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回
// double pi = M_PI or acos(-1)
// printf("%.10f\n", ans);

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i, n) cin >> x.at(i);

    int ans = MOD;
    for (int p = 1; p <= 100; p++) {
        int now = 0;
        rep(i, n) now += (x.at(i) - p) * (x.at(i) - p);
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}
