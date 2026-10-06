#include <iostream>
using namespace std;
class student 
{
    int roll;
    char name[30];
public:
    void getdata() {
        cout << "\nEnter roll: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
    void putdata() {
        cout << "\n--- Student Marklist ---\n";
        cout << "Roll no: " << roll << endl;
        cout << "Student name: " << name << endl;
    }
};
class studentexam : public student 
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;
    void acceptdata() {
        getdata();
        cout << "Enter marks of subject 1: ";
        cin >> sub1;
        cout << "Enter marks of subject 2: ";
        cin >> sub2;
        cout << "Enter marks of subject 3: ";
        cin >> sub3;
        cout << "Enter marks of subject 4: ";
        cin >> sub4;
        cout << "Enter marks of subject 5: ";
        cin >> sub5;
        cout << "Enter marks of subject 6: ";
        cin >> sub6;
    }
    void displaydata() 
    {
        putdata();
        cout << "Marks of subject 1: " << sub1 << endl;
        cout << "Marks of subject 2: " << sub2 << endl;
        cout << "Marks of subject 3: " << sub3 << endl;
        cout << "Marks of subject 4: " << sub4 << endl;
        cout << "Marks of subject 5: " << sub5 << endl;
        cout << "Marks of subject 6: " << sub6 << endl;
    }
};

class studentresult : public studentexam 
{
    float per;
public:
    void calculate() {
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        cout << "Total Percentage: " << per << "%" << endl;
    }
};
int main() 
{
    int cnt;
    cout << "Enter number of students: ";
    cin >> cnt;
    for (int i = 0; i < cnt; i++) {
        studentresult str;
        str.acceptdata();
        str.displaydata();
        str.calculate();
    }
    return 0;
}
