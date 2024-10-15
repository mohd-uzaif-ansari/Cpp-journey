#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Height of half the diamond (upper or lower part)

    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars with spaces in between
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                cout << "*";  // Print star at the edges
            } else {
                cout << " ";  // Print space inside
            }
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print stars with spaces in between
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                cout << "*";  // Print star at the edges
            } else {
                cout << " ";  // Print space inside
            }
        }
        cout << endl;
    }

    return 0;
}
