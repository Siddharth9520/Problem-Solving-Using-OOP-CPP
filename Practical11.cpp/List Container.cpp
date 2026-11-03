#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        l.push_back(x);
    }

    cout << "List: ";
    for (int i : l) {
        cout << i << " ";
    }

    l.push_front(10);
    cout << "\nAfter push_front: ";
    for (int i : l) {
        cout << i << " ";
    }

    l.push_back(50);
    cout << "\nAfter push_back: ";
    for (int i : l) {
        cout << i << " ";
    }

    l.pop_front();
    cout << "\nAfter pop_front: ";
    for (int i : l) {
        cout << i << " ";
    }

    l.pop_back();
    cout << "\nAfter pop_back: ";
    for (int i : l) {
        cout << i << " ";
    }

    return 0;
}
