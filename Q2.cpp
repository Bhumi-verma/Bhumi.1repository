#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i, pos, value;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the position to insert (1 to " << n+1 << "): ";
    cin >> pos;
    cout << "Enter the value to insert: ";
    cin >> value;

    
    if(pos < 1 || pos > n+1) {
        cout << "Invalid position!";
    } else {
        
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        
        arr[pos - 1] = value;
        n++; 
        cout << "Array after insertion:\n";
        for(i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}