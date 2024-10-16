#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int max_even = 0, max_even_sum = 0, largest_even1 = 0, largest_even2 = 0, largest_odd1 = 0, largest_odd2 = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            max_even = max(max_even, arr[i]);
            if (arr[i] > largest_even1) {
                largest_even2 = largest_even1;
                largest_even1 = arr[i];
            } else if (arr[i] > largest_even2) {
                largest_even2 = arr[i];
            }
        } else {
            if (arr[i] > largest_odd1) {
                largest_odd2 = largest_odd1;
                largest_odd1 = arr[i];
            } else if (arr[i] > largest_odd2) {
                largest_odd2 = arr[i];
            }
        }
    }

    if (largest_even1 > 0 && largest_even2 > 0) {
        max_even_sum = largest_even1 + largest_even2;
    }

    if (largest_odd1 > 0 && largest_odd2 > 0) {
        max_even_sum = max(max_even_sum, largest_odd1 + largest_odd2);
    }

    cout << max(max_even, max_even_sum) << endl;
    return 0;
}
