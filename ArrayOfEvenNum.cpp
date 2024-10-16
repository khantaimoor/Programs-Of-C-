#include<iostream>
using namespace std;
int main(){

    int array[5]={1,2,3,4,5};

    int count=0;
    for(int index=0;index<5;index++)
    {
        if(array[index]%2==0);
        count++;
    }
    cout<<"Total number of even is "<<count<<endl;
}