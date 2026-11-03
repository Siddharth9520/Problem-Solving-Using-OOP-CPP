#include <iostream>
using namespace std;

class Calculator {
public:
    int divide(int a, int b) {
        if (b == 0)
            throw b;

        return a / b;
    }
};

int main() {
    Calculator c;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        cout << "Result: " << c.divide(a, b) << endl;
    }
    catch (int) {
        cout << "Exception: Division by zero is not allowed!" << endl;
    }

    cout << "Program continues normally." << endl;

    return 0;
}
