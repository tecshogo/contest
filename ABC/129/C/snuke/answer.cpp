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
    int n, m;
    cin >> n >> m;
    vector<int> broken(n + 1);
    rep(i, m) {
        int a;
        cin >> a;
        broken.at(a) = 1;
    }
    vector<int> dp(n + 2);
    dp.at(n) = 1;
    for (int i = n - 1; i >= 0; i--) {
        if (broken.at(i)) {
            dp.at(i) = 0;
            continue;
        }
        dp.at(i) = (dp.at(i + 1) + dp.at(i + 2)) % MOD;
    }
    cout << dp[0] << endl;
    return 0;
}
