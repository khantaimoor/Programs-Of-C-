#include<iostream>
using namespace std;

int dataArray[10], arraySize, searchElement;

int binarySearch(int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (dataArray[mid] == searchElement) {
            return mid;
        } else if (dataArray[mid] > searchElement) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1; // return -1 if element not found
}

int main() {
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    cout << "Enter array elements: ";
    for (int index = 0; index < arraySize; index++) {
        cin >> dataArray[index];
    }
    cout << "Enter a number to search in the array: ";
    cin >> searchElement;
    int result = binarySearch(0, arraySize - 1);
    if (result == -1) {
        cout << "Element not found in the array.";
    } else {
        cout << "Element found at index: " << result;
    }
    return 0;
}