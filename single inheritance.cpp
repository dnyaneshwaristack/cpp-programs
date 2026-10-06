#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name = "Dnyaneshwari";
    int rollNumber = 115;

    void displayGeneralInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class EngineeringStudent : public Student {
public:
    string branch = "Computer Science";

    void displayBranchInfo() {
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    cout << "Single (Student Class)" << endl;
    
    EngineeringStudent student1;
    student1.displayGeneralInfo(); 
    student1.displayBranchInfo();        

    return 0;
}
