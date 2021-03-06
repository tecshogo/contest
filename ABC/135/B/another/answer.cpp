#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647
// MAX O(n) 10^18

int main() {
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p.at(i);

    int counter = 0;
    rep(i, N) {
        if (i + 1 != p.at(i)) counter++;
    }

    string ans = (counter == 0 || counter == 2) ? "YES" : "NO";

    cout << ans << endl;

    return 0;
}
