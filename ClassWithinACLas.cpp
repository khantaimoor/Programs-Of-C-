#include<iostream>
#include<string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

class Person{
private:
    string name_;
    int age_;
    Date birthdate_;
public:
    Person(const string& name, int age, const Date& birthdate) : name_(name), age_(age), birthdate_(birthdate) {}
    void display() const {
        cout << "Name : " << name_ << "  Age : " << age_ << endl;
        cout << "Date of birth : " << birthdate_.day << "/" << birthdate_.month << "/" << birthdate_.year << endl;
    }
};

int main(){
    Date birthdate = {10, 5, 2003};
    Person person("Taimur", 20, birthdate);
    person.display();
    return 0;
}