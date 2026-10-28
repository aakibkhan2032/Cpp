#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollno;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollno = r;
        cout << "Constructor called!" << endl;
    }

    // Member function
    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1("Aakib", 101);
    Student s2("Rahul", 102);

    s1.display();
    s2.display();

    return 0;
}