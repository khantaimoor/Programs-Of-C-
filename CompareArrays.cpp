
// // COMPARING TWO ARRAYS

#include<iostream>
using namespace std;
int main(){
    int num1[4],num2[4];

    int equal=0;
    
    for(int index=0;index<4;index++)
    {
        if(num1[index]  != num2[index])
        {
            equal=1;
            break;
        }


    }
    if(equal==1){
        cout << "arrays are not equal";
    }
    else{
        cout << "Arrays are equal";

    }
}