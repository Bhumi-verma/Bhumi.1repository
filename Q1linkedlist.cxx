#include <iostream>

using namespace std;


struct Node {
    int coefficient;
    int exponent;
    Node* next;

    Node(int coeff, int exp) : coefficient(coeff), exponent(exp), next(nullptr) {}
};


class Polynomial {
private:
    Node* head;

public:
    Polynomial() : head(nullptr) {}
    void addTerm(int coeff, int exp) {
        if (coeff == 0) return; 

        Node* newNode = new Node(coeff, exp);

        if (!head || exp > head->exponent) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            while (current->next && current->next->exponent > exp) {
                current = current->next;
            }
            if (current->next && current->next->exponent == exp) {
                current->next->coefficient += coeff;
                delete newNode;
                if (current->next->coefficient == 0) {
                    Node* toDelete = current->next;
                    current->next = current->next->next;
                    delete toDelete;
                }
            } else {
                newNode->next = current->next;
                current->next = newNode;
            }
        }
    }

    Polynomial addPolynomials(const Polynomial& other) {
        Polynomial result;
        Node* p1 = head;
        Node* p2 = other.head;

        while (p1 && p2) {
            if (p1->exponent == p2->exponent) {
                result.addTerm(p1->coefficient + p2->coefficient, p1->exponent);
                p1 = p1->next;
                p2 = p2->next;
            } else if (p1->exponent > p2->exponent) {
                result.addTerm(p1->coefficient, p1->exponent);
                p1 = p1->next;
            } else {
                result.addTerm(p2->coefficient, p2->exponent);
                p2 = p2->next;
            }
        }

        while (p1) {
            result.addTerm(p1->coefficient, p1->exponent);
            p1 = p1->next;
        }
        while (p2) {
            result.addTerm(p2->coefficient, p2->exponent);
            p2 = p2->next;
        }

        return result;
    }

    void printPolynomial() {
        Node* temp = head;
        bool first = true;
        while (temp) {
            if (!first && temp->coefficient > 0) cout << " + ";
            cout << temp->coefficient;
            if (temp->exponent > 0) {
                cout << "x";
                if (temp->exponent > 1) cout << "^" << temp->exponent;
            }
            first = false;
            temp = temp->next;
        }
        if (first) cout << "0";
        cout << endl;
    }
};

int main() {
    Polynomial poly1;
    poly1.addTerm(3, 0);
    poly1.addTerm(2, 1);
    poly1.addTerm(1, 2);

    Polynomial poly2;
    poly2.addTerm(1, 0);
    poly2.addTerm(2, 1);
    poly2.addTerm(3, 2);

    cout << "Polynomial 1: ";
    poly1.printPolynomial();
    cout << "Polynomial 2: ";
    poly2.printPolynomial();

    Polynomial result = poly1.addPolynomials(poly2);
    cout << "Resultant polynomial: ";
    result.printPolynomial();

    return 0;
}