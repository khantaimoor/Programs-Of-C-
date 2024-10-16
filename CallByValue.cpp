 //function call by Value 
 #include<iostream>
using namespace std;

 void Change(int number){
    cout << "\n n "<< number << endl;
    number = 1000;
    cout << "\n"<< number << endl;
 }
 int main(){

    int digit=1000;
    cout<<"x Is "<<endl;
    Change(digit);
    cout<<" X Is "<<digit;

 }

 //FOR FUNCTION ARGUMENTS IT IS A BAD CODE 
//  void sendEmail(std::string to, std::string subject, std::string body) {
//     // Send email
// }


// GOOD CODE FOR FUNCTION ARGUMENTS
// struct Email {
//     std::string to;
//     std::string subject;
//     std::string body;
// };

// void sendEmail(const Email& email) {
//     // Send email
// }
