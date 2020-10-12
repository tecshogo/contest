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
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    vector<int> b(n);
    copy(a.begin(), a.end(), b.begin());
    sort(b.begin(), b.end());

    rep(i, n) {
        int current = a.at(i);
        int ans = (current == b.at(n - 1)) ? b.at(n - 2) : b.at(n - 1);
        cout << ans << endl;
    }
    return 0;
}
