#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回

// long long 用の pow (MAX ll 9,223,372,036,854,775,807 -> 19桁)
ll myLongLongPow(ll base, ll times) {
    ll acc = 1;
    rep(i, times) acc *= base;
    return acc;
}

// 二次元配列を出力
void dump(int H, int W) {
    rep(i, H) {
        rep(j, W) {
        }
    }
}

// 10 -> 26進数変換
string convert(int n) {
    string result;

    // if (n == 0) return "a";
    while (n > 0) {
        n--;
        int c = n % 26;
        n /= 26;
        result += 'a' + c;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int test;
    cin >> test;
    string ans = convert(test);
    cout << ans << endl;
    return 0;
}
