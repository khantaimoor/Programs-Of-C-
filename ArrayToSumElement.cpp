#include<iostream>
using namespace std;
int main(){
    int array [10] , sum ;

    cout<<"Enter the 10 elements :";
    for (int index=0 ; index < 10 ; index++){

        cin >> array[index];
    }
    for (int index =0 ; index <10; index++){

        sum=sum+array[index];
    }
    cout << "The sum of the elements is " << sum <<endl;
}
