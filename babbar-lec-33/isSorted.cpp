#include <bits/stdc++.h>
using namespace std;

bool isSorted (int *arr, int size) {
    if (size == 0 || size == 1) return true;

    if (arr[0] > arr[1]) return false;
    else {
        bool remainingPart = isSorted (arr + 1, size - 1);
        return remainingPart;
    }
    return true;
}

int main () {
    int arr[5] = {1, 3, 4, 5, 19};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans) cout << "Array is sorted" << endl;
    else cout << "Array is not sorted" << endl;

    return 0;
}
