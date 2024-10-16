#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int min;
    cout << "Enter 5 numbers:" << endl;
    for(int i=0;i<5;i++){
        cout << "Enter the " << i+1 << " number: ";
        cin >> arr[i];
    }
    min = arr[0]; // Initialize min with the first element of the array
    for(int i=1;i<5;i++){
        if (min > arr[i] ){
            min = arr[i];
        }
    }
    cout << "The minimum number in the array is: " << min << endl;
    return 0;
}