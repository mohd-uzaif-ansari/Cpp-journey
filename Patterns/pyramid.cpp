// ~mohd-uzaif-ansari
#include <iostream>
using namespace std;
int main()
{
    int n = 10; // Number of rows for the pyramid
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print stars (2*i + 1 stars in each row)
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}