#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Height of each wing (upper and lower parts)

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print left wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print left wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right wing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
