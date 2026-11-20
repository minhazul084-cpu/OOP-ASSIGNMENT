#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int studentID;

    // Constructor: runs automatically when an object is created
    Student(string n, int id) {
        name = n;
        studentID = id;
    }

    // Member function
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << studentID << endl;
    }
};

int main() {
    Student s1("Minhazul", 210601);   // object s1 of class Student
    Student s2("Abedin", 210602);   // another object

    s1.displayInfo();
    s2.displayInfo();

    return 0;
}