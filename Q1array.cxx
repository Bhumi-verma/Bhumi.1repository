#include <iostream>

using namespace std;

const int MAX_DEGREE = 10;

// Function to add polynomials
void addPolynomials(int poly1[], int poly2[], int result[], int degree) {
    for (int i = 0; i <= degree; i++) {
        result[i] = poly1[i] + poly2[i];
    }
}

// Function to print polynomial
void printPolynomial(int poly[], int degree) {
    bool firstTerm = true;
    for (int i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (!firstTerm) {
                if (poly[i] > 0) {
                    cout << " + ";
                } else {
                    cout << " - ";
                }
            }
            if (abs(poly[i]) != 1 || i == 0) {
                cout << abs(poly[i]);
            }
            if (i > 0) {
                cout << "x";
                if (i > 1) {
                    cout << "^" << i;
                }
            }
            firstTerm = false;
        }
    }
    if (firstTerm) {
        cout << "0";
    }
    cout << endl;
}

int main() {
    int degree;

    cout << "Enter the maximum degree of the polynomials: ";
    cin >> degree;

    if (degree > MAX_DEGREE) {
        cout << "Degree exceeds maximum allowed." << endl;
        return 1;
    }

    int poly1[MAX_DEGREE + 1] = {0};
    int poly2[MAX_DEGREE + 1] = {0};
    int result[MAX_DEGREE + 1] = {0};

    cout << "Enter coefficients for polynomial 1:" << endl;
    for (int i = 0; i <= degree; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> poly1[i];
    }

    cout << "Enter coefficients for polynomial 2:" << endl;
    for (int i = 0; i <= degree; i++) {
        cout << "Coefficient of x^" << i << ": ";
        cin >> poly2[i];
    }

    // Add polynomials
    addPolynomials(poly1, poly2, result, degree);

    // Display polynomials
    cout << "Polynomial 1: ";
    printPolynomial(poly1, degree);
    cout << "Polynomial 2: ";
    printPolynomial(poly2, degree);
    cout << "Resultant polynomial: ";
    printPolynomial(result, degree);

    return 0;
}
