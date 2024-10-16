#include<iostream>
using namespace std;
 class Taimoor{
    public :
    void display(){
        cout<<"Deafault constructor called : "<<endl;
    }

 };
 int main(){
    Taimoor obj;
    obj.display();
    return 0;
 }


// EXAMPLE OF DEFAULT CONSTRUCTOR

//  #include<iostream>
// #include<string>
// using namespace std;
//  class Taimu {
//     private :
//     string brand;
//     string model;
//     int year;

//     public :
//     Taimu (){
//         brand ="Toyotaa ";
//         model="VSX";
//         year=2019;

        
//     }
//     void display (){
//         cout<<"Brand :"<<brand<<endl;
//         cout<<"ModeL :"<<model<<endl;
//         cout<<"Year : "<<year<<endl;
//     }

//  };
//  int main(){
//     Taimu obj;
//     obj.display();
//     return 0;

//  }
