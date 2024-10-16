#include<iostream>
using namespace std;
inline int add(int a)
{
    return a+a;
}
inline int sub(int a)
{
    return a-a-a;
}
int main ()
{
    cout<<"addittion  Of 5 ="<<add(5);
    cout<<"subtraction  Of 5 ="<<sub(5);
    return 0;
}