// ~mohd-uzaif-ansari
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 11;
    b = 9;
    cout << (a < b) << "\n";                  // without using OR
    cout << ((a < b) || (a > b)) << "\n";      // with using OR
    return 0;



    /*second statment is true i.e. [ (a>b)]*/     // true
    /*one statemnt is wrong i.e. [(a>b)]*/  // false
    // but in OR it give true if one statment is true another is wrong
}