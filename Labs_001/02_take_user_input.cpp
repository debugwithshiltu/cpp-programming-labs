// Program to print an integer entered by the user.
// cin -> console input.

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    system("pause");//is used to pause the program before it closes.
    return 0;
}