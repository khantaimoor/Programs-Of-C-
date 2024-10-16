

#include<iostream>
using namespace std;

class Marks{
 int first,second,third;

    public :
    void enter ()
    {
        cout<<"Enter three marks : ";
        cin>>first>>second>>third;
    }
    int sum ()
    {
        return first+second+third;
    }
    float average (){
        return (float)(first+second+third)/3;
    }

};

int main(){
    Marks m1;
    m1.enter();
    int s = m1.sum();
    float a = m1.average();
    cout << "The sum of marks is " << s << endl;
    cout << "The average of marks is : " << a <<endl;
   

    return 0;
}