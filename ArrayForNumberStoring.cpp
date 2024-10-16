#include<iostream>
using namespace std;

int main()
{
  int positiveIntegers[7]; // array to store positive integers
  int userInput, indexCounter = 0; // counter for array index

  do {
    cout << "Please enter a positive integer (-1 to end input): ";
    cin >> userInput;
    if (userInput > 0) { 
      if (indexCounter < 7) { 
        positiveIntegers[indexCounter] = userInput;
        indexCounter++;
      } else {
        cout << "Array is full. Cannot store more than 7 positive integers." << endl;
      }
    }
  } while (userInput != -1);

  cout << "The total number of positive integers are: " << indexCounter << endl;
  cout << "The positive integers are: ";
  for (int arrayIndex = 0; arrayIndex < indexCounter; arrayIndex++) {
    cout << positiveIntegers[arrayIndex] << " ";
  }
  cout << endl;
  return 0;
}