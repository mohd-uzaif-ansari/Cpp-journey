/*this code is on about to calculate percentage with grading sytem and pass fail*/
// Author : Mohd Uzaif Ansari
#include <iostream>
using namespace std;
int main()
{
    cout << "==============================================================================\n";

    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    cout << "Enter Subject 1 Marks :";
    cin >> (sub1);
    cout << "Enter Subject 2 Marks :";
    cin >> (sub2);
    cout << "Enter Subject 3 Marks :";
    cin >> (sub3);
    cout << "Enter Subject 4 Marks :";
    cin >> (sub4);
    cout << "Enter Subject 5 Marks :";
    cin >> (sub5);
    // total of marks
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    // percentage of marks
    percentage = (total * 100) / 500;
    cout << "Total marks is = " << (total) << "\n";
    cout << "Percentage = " << (percentage) << "%\n";
    // grading system
    if (percentage >= 90 && percentage <= 100)
    {
        cout << "Grade: A+\n";
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "Grade: A\n";
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "Grade: B\n";
    }
    else if (percentage >= 60 && percentage < 70)
    {
        cout << "Grade: C\n";
    }
    else if (percentage >= 50 && percentage < 60)
    {
        cout << "Grade: D\n";
    }
    else
    {
        cout << "Grade: F\n";
    }

    // pass/fail check using logical operators
    if (percentage >= 33 && percentage <= 100)
    {
        cout << "Status: Pass\n";
    }
    else
    {
        cout << "Status: Fail\n";
    }

    return 0;
}