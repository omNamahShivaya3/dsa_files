#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int size) {
    cout << "Size of array is: "<< size << endl;
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        cout<< arr[i] << " ";
    }
    cout << endl;
    
}

int binarySearch (int *arr, int size, int k) {
        printArray (arr, size);

    int s = 0;
    int e = size - 1;
    int m = s + (e - s)/2;
    
    while (s <= e) {

    if (arr[m] == k) return m;    

    if (arr[m] < k) {
        s = m + 1;
    }
    else {
        e = m - 1;
    }
    m = s + (e - s)/2;
    }
    return -1;
    } 
    

int main () {
    int arr[5] = {4, 1, 2, 3, 5};
    int size = 5;
    int k = 5;

    sort (arr, arr + 5);
    int ans = binarySearch(arr, 5, 5);
    cout << ans << endl;
    
    return 0;
}