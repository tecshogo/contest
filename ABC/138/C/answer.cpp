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
    vector<int> v(n);
    rep(i, n) cin >> v.at(i);

    sort(v.begin(), v.end());

    double ans = v.at(0);
    rep(i, n - 1) {
        ans = (ans + v.at(i + 1)) / 2;
    }
    cout << ans << endl;

    return 0;
}
