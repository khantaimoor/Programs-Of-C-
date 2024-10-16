//CALL BY REFERENCE
#include<iostream>
using namespace std;

// Function to change the value of a variable using a pointer
void ChangeValue(int *pointer) {
    *pointer = *pointer + 10; 
    cout << "Pointer Value is " << *pointer << endl;
}

int main() {
    int number; 
 
    cout << "Enter the number: ";
    cin >> number;

    ChangeValue(&number);

    cout << "Original Value is: " << number << endl;

    return 0;
}

// BAD CODE OF REPITATION 
// double getUserSalary(User user) {
//     return user.baseSalary + user.bonus;
// }

// double getAdminSalary(Admin admin) {
//     return admin.baseSalary + admin.bonus;
// }


//GOOD CODE FOR AVOID REPITATION
// double getSalary(Person person) {
//     return person.baseSalary + person.bonus;
// }
