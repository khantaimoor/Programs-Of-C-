#include<iostream>
using namespace std;

int main() {
    int dataArray[10], arraySize, index;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    cout << "Enter the elements in the array: ";
    for (index = 0; index < arraySize; index++) {
        cin >> dataArray[index];
    }
    arraySize--;

    cout << "Array after deletion of the last element:" << endl;
    for (index = 0; index < arraySize; index++) {
        cout << dataArray[index] << endl;
    }

    dataArray[arraySize] = 9;
    arraySize++;

    cout << "Array after adding 9 at the end: ";
    for (index = 0; index < arraySize; index++) {
        cout << dataArray[index] << endl;
    }
    return 0;
}