#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647
// MAX O(n) 10^18

int main() {
    string S;
    cin >> S;

    int numOfTry = S.size() / 2;
    int ans = 0;
    rep(i, numOfTry) {
        if (S.at(i) != S.at(S.size() - (i + 1))) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}