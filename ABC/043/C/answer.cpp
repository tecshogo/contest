#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int      2147483647 -> 2,147,483,647
// MAX O(n) 10^18

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a.at(i);

    int ans = 100000;
    for (int z = -100; z <= 100; z++) { // 0(N) = 2000 * 100
        int sum = 0;
        rep(j, N) {
            sum += (a.at(j) - z) * (a.at(j) - z);
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;
    
    return 0;
}
