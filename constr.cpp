#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        id = 0;
    }

    // Parameterized constructor
    Student(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << name << " " << id << endl;
    }
};

int main() {
    // Three objects using the parameterized constructor
    Student s1("Rahim", 210601);
    Student s2("Karim", 210602);
    Student s3("Salma", 210603);

    // One object using the default constructor (for comparison)
    Student s4;

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}