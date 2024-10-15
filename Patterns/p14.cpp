// ~mohd-uzaif-ansari
#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        // to print spaces
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        // to print number
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}