#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int cube;
    for (int i = 0; i <= number; i++)
    {
        cube = i * i * i;
    }
    cout << "The cube is: " << cube;
    return 0;
}