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

bool linearSearch (int *arr, int size, int k) {
    printArray (arr, size);
    // base case
    if (arr[0] == k) return true;

    else {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}

int main () {
    int arr[5] = {1, 2, 4, 5, 6};
    int k = 6;
    int size = 5;

    int ans = linearSearch (arr, size, k);

    if (ans) {
        cout << "Present" << endl;
    }
    else {
        cout << "Absent" << endl;
    }

    return 0;
}