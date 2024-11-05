// Build a Student class that holds a name and a list of grades. 
// Implement methods to add a grade and calculate the average grade.

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double grades[10];
    int gradeCount = 0;

    void addGrade(double grade) {
        if (gradeCount < 10) { // Check if we can add a new grade
            grades[gradeCount] = grade;
            gradeCount++;
        } else {
            cout << "Cannot add more grades, maximum limit reached." << endl;
        }
    }

    double calculateAverage() {
        if (gradeCount == 0) {
            return 0; // Avoid division by zero
        }
        double sum = 0;
        for (int i = 0; i < gradeCount; i++) {
            sum += grades[i];
        }
        return sum / gradeCount; // Return the average
    }
};

int main() {
    Student student;
    student.name = "Taymur";
    student.addGrade(90);
    student.addGrade(80);
    student.addGrade(70);
    student.addGrade(60);

    double average = student.calculateAverage(); // Calculate average
    cout << "Average grade for " << student.name << " is: " << average << endl;

    return 0;
}

