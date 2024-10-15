// ~mohd-uzaif-ansari
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        // spaces : n - i - 1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // nums1 : i + 1
        for (int j = 0; j <= i + 1; j++)
        {
            cout << "*";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}