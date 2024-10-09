// ~mohd-uzaif-ansari
#include <iostream>
#include <limits.h> // Add this to use INT_MAX
using namespace std;
int main()
{
    int nums[] = {5, 10, 55, 5, -34, 22, -35};
    // this line is for cheaking size of an array
    // cout << sizeof(nums)/sizeof(int)<<endl;
    int size = 7;

    int smallest = INT_MAX;
    int smallestIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            smallestIndex = i;
        }
    }
    cout << "smallest value is = " << smallest << endl;
    cout << "index is = " << smallestIndex << endl;
    return 0;
}