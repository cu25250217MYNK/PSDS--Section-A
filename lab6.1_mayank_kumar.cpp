
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < n; i++)
        minHeap.push(a[i]);

    cout << "\nMin Heap (ascending order): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    // Max Heap
    priority_queue<int> maxHeap;
    for (int i = 0; i < n; i++)
        maxHeap.push(a[i]);

    cout << "\nMax Heap (descending order): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    // Priority Queue
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
        pq.push(a[i]);

    cout << "\nPriority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    // Heap Sort
    int b[100];
    for (int i = 0; i < n; i++)
        b[i] = a[i];

    make_heap(b, b + n);
    sort_heap(b, b + n);

    cout << "\nHeap Sort (ascending order): ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    cout << endl;
    return 0;
}
