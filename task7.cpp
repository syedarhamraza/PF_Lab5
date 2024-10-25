#include <iostream>
using namespace std;

int main()
{
    float totalSubjects = 0;
    float totalMarks = 0;
    float marks = 0;
    float avg = 0;
    cout << "Enter the total number of subjects: ";
    cin >> totalSubjects;

    for (int i = 1; i <= totalSubjects; i++)
    {
        cout << "Enter the marks of subjects: ";
        cin >> marks;
        totalMarks += marks;
    }
    avg = totalMarks / totalSubjects;
    if (avg >= 90)
    {
        cout << "Grade A";
    }
    else if (avg >= 75 && avg <= 89)
    {
        cout << "Grade B";
    }
    else if (avg >= 50 && avg <= 74)
    {
        cout << "Grade C";
    }
    else
    {
        cout << "Grade F";
    }
    return 0;
}