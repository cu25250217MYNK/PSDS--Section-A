#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    for(int &x : a) cin >> x;

    int sum = 0;
    for(int i = 0; i < K; i++)
        sum += a[i];

    int ans = sum;

    for(int i = K; i < N; i++) {
        sum += a[i] - a[i-K];
        ans = max(ans, sum);
    }

    cout << ans;
    return 0;
}
