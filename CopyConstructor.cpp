#include<iostream>
#include<string>
using namespace std;
 class myCar {
     private:
     string brand;
     string model;
     int price;

     public :
     myCar (const string&b, const string&m,int p) :brand(b),model(m),price (p){ };

    //  COPY CONSTRUCTOR 
    myCar(const myCar& other )
    {
        brand=other.brand;
        model=other.model;
        price=other.price;
    }
    void display (){
        cout<<"Brand "<<brand<<endl;
        cout<<"model  :"<<model;


        cout<<"Price : "<<price<<endl;


    }

 };
 int main(){
    myCar c1("BMW","VXR",2024);
   myCar car=car;
   cout<<"Original Car information :";
   c1.display();

 }


//BAD CODE FOR Use One Level of Abstraction per Function
// void manageUser() {
//     User user = fetchUser();
//     if (user.isActive()) {
//         notifyUser(user);
//     }
// }



//GOOD CODE  FOR USE ONE LEVEL OF ABSTRACTION PER FUNCTION
// void manageUser() {
//     User user = fetchUser();
//     notifyUserIfActive(user);
// }

// void notifyUserIfActive(const User& user) {
//     if (user.isActive()) {
//         notifyUser(user);
//     }
// }

