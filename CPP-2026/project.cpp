#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, res;
    cout << "Enter your numbers to be added." << endl;

    cout << "num1: ";
    cin >> num1;

    cout << "num2: ";
    cin >> num2;

    cout << "num3: ";
    cin >> num3;

    res = num1 + num2 + num3;

    cout << "result = " << res << endl;
    return 0;
}