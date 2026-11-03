#include <iostream>
using namespace std;

// Function Template
template <class T>
T add(T a, T b) {
    return a + b;
}

// Class Template
template <class T>
class Calculator {
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T multiply() {
        return a * b;
    }

    void display() {
        cout << "Multiplication: " << multiply() << endl;
    }
};

int main() {
    cout << "Function Template:" << endl;
    cout << "Addition of integers: " << add(10, 20) << endl;
    cout << "Addition of decimals: " << add(2.5, 3.5) << endl;

    cout << "\nClass Template:" << endl;
    Calculator<int> c1(4, 5);
    c1.display();

    Calculator<double> c2(2.5, 4.0);
    c2.display();

    return 0;
}