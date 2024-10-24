#include <iostream>
using namespace std;

int main()
{
    int naturalNumbers;
    cout << "Enter the N numbers: ";
    cin >> naturalNumbers;
    int sum = 0;
    for (int i = 1; i <= naturalNumbers; i++)
    {
        sum += i;
    }
    cout << "The sum is:" << sum << endl;
    return 0;
}