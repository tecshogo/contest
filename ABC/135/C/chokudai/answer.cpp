#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
const int INF = 1001001001;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^8 -> 8回
// double pi = M_PI or acos(-1)
// printf("%.10f\n", ans);

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n);
    rep(i, n + 1) cin >> a.at(i);
    rep(i, n) cin >> b.at(i);

    // Aのそれぞれの要素が10^9までなので
    // sumはintに収まらないことに注意！
    long ans = 0;
    rep(i, n) {
        // まずは左を全力で倒す
        int left = min(a.at(i), b.at(i));
        ans += left;
        a.at(i) -= left;
        b.at(i) -= left;

        // 残った戦力で右を全力で倒す
        int right = min(a.at(i + 1), b.at(i));
        ans += right;
        a.at(i + 1) -= right;
        b.at(i) -= right;
    }

    cout << ans << endl;

    return 0;
}
