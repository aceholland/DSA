// we cannot use division
//product of array except self

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(int arr[], int n) {
    vector<int> ans(n, 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                ans[i] *= arr[j];
            }
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    vector<int> ans = productExceptSelf(arr, n);

    for (int value : ans) {
        cout << value << " ";
    }
}