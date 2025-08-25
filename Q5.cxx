#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node{value, head};
        head = newNode;
    }

    void deleteNode(int value) {
        if (!head) return;
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* prev = head;
        while (prev->next) {
            if (prev->next->data == value) {
                Node* temp = prev->next;
                prev->next = temp->next;
                delete temp;
                return;
            }
            prev = prev->next;
        }
    }

    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void concatenate(LinkedList& A, LinkedList& B, LinkedList& C) {
    C.head = A.head;
    if (!C.head) C.head = B.head;
    else {
        Node* temp = C.head;
        while (temp->next) temp = temp->next;
        temp->next = B.head;
    }
}

void invert(LinkedList& X) {
    Node* prev = nullptr;
    Node* current = X.head;
    while (current) {
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    X.head = prev;
}

int main() {
    LinkedList A, B, C;
    A.insert(1); A.insert(2);
    B.insert(3); B.insert(4);

    cout << "A: "; A.print();
    cout << "B: "; B.print();

    concatenate(A, B, C);
    cout << "C (A+B): "; C.print();

    invert(C);
    cout << "C inverted: "; C.print();

    return 0;
}
