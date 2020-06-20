#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    int number = N;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    string ans = (N % sum == 0) ? "Yes" : "No";

    cout << ans << endl;

    return 0;
}
