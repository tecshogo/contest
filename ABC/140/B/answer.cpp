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
    vector<int> A(N), B(N);
    vector<int> C(N - 1);
    rep(i, N) cin >> A.at(i);
    rep(i, N) cin >> B.at(i);
    rep(i, N - 1) cin >> C.at(i);

    int prevIndex = MOD;
    int ans = 0;
    rep(i, N) {
        ans += B.at(A.at(i) - 1);
        if (A.at(i) - 1 == prevIndex + 1) ans += C.at(prevIndex);
        prevIndex = A.at(i) - 1;
    }

    cout << ans << endl;

    return 0;
}
