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
    string branch = "Engineering";

    void displayBranchInfo() {
        cout << "Field of Study: " << branch << endl;
    }
};

class ComputerScienceStudent : public EngineeringStudent {
public:
    string domain = "Automation";

    void displayDomain() {
        cout << "Domain: " << domain << endl;
    }
};

int main() {
    cout << "Multilevel" << endl;
  
    ComputerScienceStudent csStudent;
    csStudent.displayGeneralInfo(); 
    csStudent.displayBranchInfo();       
    csStudent.displayDomain();

    return 0;
}
