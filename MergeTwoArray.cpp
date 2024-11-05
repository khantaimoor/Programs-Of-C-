// // Merge Two Sorted Arrays: Given two sorted arrays, merge them into a single sorted array 
// // without using extra space for a third array.
// #include <iostream>
// using namespace std;

// class Array {
// public:
//     void mergeArrays(int arr1[], int n, int arr2[], int m) {
//         int i = n - 1; // Last index of arr1
//         int j = m - 1; // Last index of arr2
//         int k = n + m - 1; // Last index of merged array

//         // Merge arr2 into arr1 from the end
//         while (j >= 0) {
//             if (i >= 0 && arr1[i] > arr2[j]) {
//                 arr1[k--] = arr1[i--];
//             } else {
//                 arr1[k--] = arr2[j--];
//             }
//         }
//     }

//     void printArray(int arr[], int size) {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Array arrayObj;
    
//     // Example arrays
//     int arr1[7] = {1, 3, 5, 0, 0, 0, 0}; // arr1 has extra space for arr2
//     int arr2[4] = {2, 4, 6, 8};

//     // Merging arr2 into arr1
//     arrayObj.mergeArrays(arr1, 3, arr2, 4);

//     // Print the merged array
//     cout << "Merged array: ";
//     arrayObj.printArray(arr1, 7);

//     return 0;
// }

