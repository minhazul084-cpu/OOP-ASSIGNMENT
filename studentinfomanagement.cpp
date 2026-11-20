#include <bits/stdc++.h>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    string department;
    float semester;

public:
    void setInformation(int id, string n, string dept, float sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }

    void displayInformation() {
        cout << "Student ID : " << studentID << endl;
        cout << "Name       : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Semester   : " << semester << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Student s1, s2, s3,s4;

    s1.setInformation(25011, "Minhazul", "ICT", 2.1);
    s2.setInformation(25023, "Shakibul", "ME", 2.2);
    s3.setInformation(25016, "Shipon", "CSE", 1.2);
    s4.setInformation(25028, "RASEL", "AGRI", 1.1);

    s1.displayInformation();
    s2.displayInformation();
    s3.displayInformation();
    s4.displayInformation();

    return 0;
}