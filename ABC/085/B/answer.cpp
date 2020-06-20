#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    set<int> UniqueD;
    rep(i, N) {
        int tmp;
        cin >> tmp;
        UniqueD.insert(tmp);
    }

    cout << UniqueD.size() << endl;

    return 0;
}
