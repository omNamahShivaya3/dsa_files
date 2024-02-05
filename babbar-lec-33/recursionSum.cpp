#include <bits/stdc++.h>
using namespace std;

int isSum (int *arr, int size) {
    int sum = 0;
    if (size == 0 ) return 0;

    else {
        sum += arr[0];
    } 

    int remainingSum = isSum (arr + 1, size - 1);
    sum += remainingSum;
    return sum;

}

int main () {
    int arr[5] = {3, 2, 5, 1, 6};
    int ans = isSum (arr, 5);
    cout << ans << endl;

    return 0;
}