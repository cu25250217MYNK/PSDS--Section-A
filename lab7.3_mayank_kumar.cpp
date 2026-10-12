
#include <iostream>
using namespace std;

int main() {
    int a[100], n, target;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter target sum: ";
    cin >> target;

    int sum = 0, start = 0;
    int minLen = n + 1;

    for (int end = 0; end < n; end++) {
        sum += a[end];

        while (sum > target) {
            int len = end - start + 1;

            if (len < minLen)
                minLen = len;

            sum -= a[start];
            start++;
        }
    }

    if (minLen == n + 1)
        cout << "No subarray found";
    else
        cout << "Smallest subarray length: " << minLen;

    return 0;
}
