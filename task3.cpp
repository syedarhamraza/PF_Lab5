#include <iostream>
using namespace std;

int main()
{
    int number_1 = 0;
    cout << "Enter the number for table: ";
    cin >> number_1;
    for (int i = 1; i <= 10; i++)
    {
        cout << number_1 << " X " << i << " = " << number_1 * i << endl;
    }
    return 0;
}