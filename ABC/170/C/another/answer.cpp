#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> d(102);
    rep(i, n) {
        int p;
        cin >> p;
        d[p] = 1;
    }
    P ans(999999, -1);
    for (int i = 0; i <= 101; i++) {
        if (d[i] == 1) continue;
        int dif = abs(x - i);
        ans = min(ans, P(dif, i));
    }
    cout << ans.second << endl;
    return 0;
}
