#include <iostream>
using namespace std;

int squareByValue(int n) {
    return n * n;
}

void squareByReference(int &n) {
    n = n * n;
}


void squareByPointer(int *n) {
    if (n)
        *n = (*n) * (*n);
}

int main() {
    int a = 5, b = 6, c = 7;

    cout << "Original a: " << a << endl;
    int result = squareByValue(a);
    cout << "Square of a (by value): " << result << endl;
    cout << "a after function (by value): " << a << endl;

    cout << "\nOriginal b: " << b << endl;
    squareByReference(b);
    cout << "b after function (by reference): " << b << endl;

    cout << "\nOriginal c: " << c << endl;
    squareByPointer(&c);
    cout << "c after function (by pointer): " << c << endl;

    return 0;
}
