//ARRAY TO ADD ANY NUMBER

#include<iostream>
using namespace std;

int main(){
    int size, position, number;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    int* array = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter the position to insert the number: ";
    cin >> position;
    cout << "Enter the number to insert: ";
    cin >> number;

    for (int i = size - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }

    array[position] = number;

   
    cout << "Modified array: ";
    for (int i = 0; i <= size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    delete[] array;

    return 0;
}