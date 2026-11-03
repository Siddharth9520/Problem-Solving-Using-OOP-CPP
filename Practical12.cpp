#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 5.75;

    double c = a;
    cout << "Implicit Casting: " << c << endl;

    int x = static_cast<int>(b);
    cout << "static_cast: " << x << endl;

    const int num = 20;
    const int* ptr = &num;
    int* ptr2 = const_cast<int*>(ptr);

    cout << "const_cast: " << *ptr2 << endl;

    int value = 100;
    int* p = &value;
    char* ch = reinterpret_cast<char*>(p);

    cout << "reinterpret_cast: "
         << static_cast<int>(*ch) << endl;

    return 0;
}