#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge {
    int u, v, w;
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<Edge> edges(M);

    for(auto &e : edges)
        cin >> e.u >> e.v >> e.w;

    const long long INF = 1e18;
    vector<long long> dp(N + 1, INF);

    dp[1] = 0;

    for(int i = 1; i <= K; i++) {
        vector<long long> next = dp;

        for(auto e : edges) {
            if(dp[e.u] != INF)
                next[e.v] = min(next[e.v], dp[e.u] + e.w);

            if(dp[e.v] != INF)
                next[e.u] = min(next[e.u], dp[e.v] + e.w);
        }

        dp = next;
    }

    if(dp[N] == INF)
        cout << -1;
    else
        cout << dp[N];

    return 0;
}
