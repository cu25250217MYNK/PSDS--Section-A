#include <iostream>
#include<vector>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int solve(int N, vector<int> nums) {
    int cnt[100] = {}, ans = 0;

    for (int x : nums) {
        int s = digitSum(x);
        ans += cnt[s];
        cnt[s]++;
    }

    return ans;
}
int main() {
    int N;
    cin >> N;

    vector<int> nums(N);
    for (int &x : nums) cin >> x;

    cout << solve(N, nums);
    return 0;
}
