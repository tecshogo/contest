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
    vector<int> k(m);
    vector<vector<int>> s(m);
    rep(i, m) {
        cin >> k.at(i);
        rep(j, k.at(i)) {
            int tmp;
            cin >> tmp;
            s.at(i).push_back(tmp - 1);
        }
    }
    vector<int> p(m);
    rep(i, m) cin >> p.at(i);

    int ans = 0;
    for (int bits = 0; bits < (1 << n); bits++) {
        int sum = 0;
        rep(i, m) {  // 電球
            int counter = 0;
            rep(j, k.at(i)) {
                if((bits >> s.at(i).at(j)) == 1) {
                    counter++;
                }
            }
            if(counter % 2 == p.at(i)) sum++;
        }
        if (sum == m) ans++;
    }

    cout << ans << endl;
    return 0;
}
