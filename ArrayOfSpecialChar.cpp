#include <iostream>

using namespace std;

int main() {
    const char array[] = "APPLE"; // Character array (string)
    const char special[] = "PP";  // Special character to find

    int arrayLength = sizeof(array) - 1; // Calculate length of array
    int specialLength = sizeof(special) - 1; // Calculate length of special


    for (int i = 0; i <= arrayLength - specialLength; ++i) {
        bool found = true;
        for (int j = 0; j < specialLength; ++j) {
            if (array[i + j] != special[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << "Special character '" << special << " found at index " << i << endl;
            break; // Exit the loop if found
        }
    }

    return 0;
}
