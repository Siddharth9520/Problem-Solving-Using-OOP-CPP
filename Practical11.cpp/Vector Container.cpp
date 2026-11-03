#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector: ";
    for (int i : v) {
        cout << i << " ";
    }

    v.push_back(50);
    cout << "\nAfter push_back: ";
    for (int i : v) {
        cout << i << " ";
    }

    v.pop_back();
    cout << "\nAfter pop_back: ";
    for (int i : v) {
        cout << i << " ";
    }

    cout << "\nFirst element: " << v.front();
    cout << "\nLast element: " << v.back();
    cout << "\nSize of vector: " << v.size();

    return 0;
}
