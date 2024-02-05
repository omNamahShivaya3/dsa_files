#include <bits/stdc++.h>
using namespace std;

bool binSearch(int *arr, int s, int e, int k)
{

    int m = s + (e - s) / 2;

    // base case
    if (s > e)
        return false;
    if (arr[m] == k)
        return true;

    if (arr[m] > k)
    {
        return binSearch(arr, s, m - 1, k);
    }
    if (arr[m] < k)
    {
        return binSearch(arr, m + 1, e, k);
    }
}

int main()
{
    int arr[5] = {4, 1, 2, 3, 5};
    int size = 5;
    int k = 88;

    sort(arr, arr + 5);
    bool ans = binSearch(arr, 0, size, k);
    cout << ans << endl;

    return 0;
}