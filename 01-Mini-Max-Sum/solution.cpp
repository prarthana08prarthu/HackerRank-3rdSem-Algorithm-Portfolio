#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long total = 0;
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for (int x : arr) {
        total += x;
        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    cout << total - maximum << " " << total - minimum;
}

int main() {
    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}