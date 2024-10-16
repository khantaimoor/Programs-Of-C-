#include<iostream>
using namespace std;

int main() {
    int dataArray[10], arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    cout << "Enter the elements in the array: ";
    for (int index = 0; index < arraySize; index++) {
        cin >> dataArray[index];
    }
    for (int index = 0; index < arraySize - 1; index++) {
        dataArray[index] = dataArray[index + 1];
    }
    arraySize--;

    cout << "After deletion, the array is: ";
    for (int index = 0; index < arraySize; index++) {
        cout << dataArray[index] << endl;
    }
    return 0;
}