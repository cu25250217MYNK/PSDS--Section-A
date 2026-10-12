
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int a[100], n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int b[100];
    int l = 0, r = n - 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            b[i] = a[l++];
        else
            b[i] = a[r--];
    }

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += abs(b[i] - b[i + 1]);

    cout << "\nMaximum adjacent difference sum: " << sum;

    return 0;
}
