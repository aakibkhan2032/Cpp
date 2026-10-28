#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    float marks;

public:
    void get_data(string n, int r, float m) {
        name = n;
        rollno = r;
        marks = m;
    }

    void display_data() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1, s2;

    s1.get_data("Aakib", 101, 89.5);
    s2.get_data("Rahul", 102, 92.0);

    s1.display_data();
    s2.display_data();

    return 0;
}
