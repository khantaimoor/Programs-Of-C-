#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[n + 1]; // Increase the array size by 1 to accommodate the new element
    int j;

    // Input elements into the array
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Shift elements to the right to make space for the new element
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Input the new element to be added at the beginning
    cout << "Enter the element to be added at the beginning: ";
    cin >> arr[0];

    // Display the updated array
    cout << "Updated array: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}