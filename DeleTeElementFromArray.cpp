#include<iostream>
using namespace std;

int main(){
    int a[5] = {0, 1, 2, 3, 4}, pos, i;
    cout << "Please enter the position where you want to delete the number: ";
    cin >> pos;

    if (pos < 0 || pos >= 5) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (i = pos; i < 4; i++) {
        a[i] = a[i + 1];
    }

    // Reduce the array size by 1
    int newSize = 4;

    cout << "Updated array: ";
    for (i = 0; i < newSize; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    
    int newValue;
    cout << "Enter a new value to insert: ";
    cin >> newValue;

    // Increase the array size by 1
    newSize++;


    a[newSize - 1] = newValue;

    // Print the updated array
    cout << "Updated array after insertion: ";
    for (i = 0; i < newSize; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}