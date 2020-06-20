#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int a, b;
    cin >> a >> b;

    string digits = to_string(a) + to_string(b);
    int number = stoi(digits);

    int MAX_NUMBER = 100100;

    int i = 0;
    bool isPower = false;
    while (pow(i, 2) <= MAX_NUMBER) {
        if (pow(i, 2) == number) isPower = true;
        i++;
    }

    string ans = isPower ? "Yes" : "No";

    cout << ans << endl;

    return 0;
}
