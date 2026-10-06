#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    void commonDetails() {
        cout << "collage: DYP collage." << endl;
    }
};

class EngineeringStudent : public Student {
public:
    void engineeringTask() {
        cout << "Study: Study Newtechnologies." << endl;
    }
};

class MedicalStudent : public Student {
public:
    void medicalTask() {
        cout << "Study: Study Bodyanotomy." << endl;
    }
};

int main() {
    cout << "Hierarchical" << endl;
    
    cout << "\nStudent 1" << endl;
    EngineeringStudent engStudent;
    engStudent.commonDetails();    
    engStudent.engineeringTask();  
    cout << "\nStudent 2" << endl;
    MedicalStudent medStudent;
    medStudent.commonDetails();   
    medStudent.medicalTask();     

    return 0;
}
