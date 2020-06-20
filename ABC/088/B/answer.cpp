#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a.at(i);

    sort(a.begin(), a.end());

    int AliceSum = 0, BobSum = 0;
    while (true) {
        AliceSum += a.back();
        a.pop_back();
        if (a.size() == 0) break;

        BobSum += a.back();
        a.pop_back();
        if (a.size() == 0) break;
    }

    int ans = AliceSum - BobSum;

    cout << ans << endl;

    return 0;
}
