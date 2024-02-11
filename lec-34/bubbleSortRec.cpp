#include <iostream>
using namespace std;

void sortArr (int *arr, int n) {
    if (n == 0 || n == 1) return;
    // base case

    if (arr[0] > arr[1]) swap (arr[0], arr[1]);
    
    sortArr (arr, n - 1);
}