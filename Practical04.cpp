#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    int &ref = num;       
    int *ptr = &num;      

    cout << "Original value: " << num << endl;
    cout << "Value using reference: " << ref << endl;
    cout << "Value using pointer: " << *ptr << endl;

    int *p = new int;

    *p = 50;

    cout << "\nDynamically allocated value: " << *p << endl;

    delete p;

    int n;

    cout << "\nEnter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}