#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int max;
    cout << "Enter 5 numbers:" << endl;
    for(int i=0;i<5;i++){
        cout << "Enter the " << i+1 << " number: ";
        cin >> arr[i];
    }
    max = arr[0]; // Initialize max with the first element of the array
    for(int i=1;i<5;i++){
        if (max < arr[i] ){
            max = arr[i];
        }
    }
    cout << "The maximum number in the array is: " << max << endl;
    return 0;
}