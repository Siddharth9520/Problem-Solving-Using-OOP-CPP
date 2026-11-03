#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("Rahul");

    cout << "Before move:" << endl;
    s1.display();

    Student s2 = move(s1);

    cout << "\nAfter move:" << endl;

    cout << "Source object: ";
    s1.display();

    cout << "Destination object: ";
    s2.display();

    return 0;
}