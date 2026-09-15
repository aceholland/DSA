#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int st = 0, end = v.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (v[mid] == target) {
            cout << "found at index " << mid << endl;
            return 0;
        }

        // left half is sorted
        if (v[st] <= v[mid]) {
            if (v[st] <= target && target < v[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        // right half is sorted
        else {
            if (v[mid] < target && target <= v[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    cout << "not found" << endl;
    return -1;
}
