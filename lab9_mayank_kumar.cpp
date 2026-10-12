#include <iostream>
#include <cstdlib>
using namespace std;

void solve() {
    int N;
    cin >> N;

    long long ans = 0;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        ans += abs(x);
    }

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
