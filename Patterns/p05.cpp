// ~ mohd-uzaif-ansari
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Printing stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
