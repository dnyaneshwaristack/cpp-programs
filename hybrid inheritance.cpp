#include <iostream>
#include <string>
using namespace std;

// 1. BASE CLASS
class Student {
public:
    string name = "Dnyaneshwari";
    int rollNumber = 115;

    void displayStudentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Sports : virtual public Student {
public:
    int sportsScore = 83;

    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << "/100" << endl;
    }
};

class Academics : virtual public Student {
public:
    int academicScore = 93;

    void displayAcademicScore() {
        cout << "Academic Score: " << academicScore << "/100" << endl;
    }
};

class Result : public Sports, public Academics {
public:
    void displayFinalResult() {
        int total = (sportsScore + academicScore) / 2;
        cout << "Overall Performance Grade: " << total << "%" << endl;
    }
};

int main() {
    cout << "Hybrid" << endl;
    Result studentResult;
    studentResult.displayStudentInfo();
    studentResult.displaySportsScore();
    studentResult.displayAcademicScore();
    studentResult.displayFinalResult();

    return 0;
}
