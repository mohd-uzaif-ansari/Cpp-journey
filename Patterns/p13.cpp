#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch = 'A';  // Initialize character

    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < i; j++){
            cout << " ";
        }

        // Print characters
        for (int j = 0; j < n - i; j++){
            cout << ch;
        }

        ch++;  // Move to the next character
        cout << endl;
    }
    
    return 0;
}
