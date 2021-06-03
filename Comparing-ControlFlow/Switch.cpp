#include <iostream>
#include <string>
using namespace std;

int main()
{
    int state = 1;
    int userInput;
    cin >> userInput;
    switch (userInput)
    {
        case 2:
            cout << "Congrats You Won";
            break;

        case 3:
            cout << "You Lost";
            break;

        default:
            cout << "You tied with me";
            break;
    }
}
