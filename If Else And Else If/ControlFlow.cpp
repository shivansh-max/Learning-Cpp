#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 500000000)
    {
        cout << "The value of x is grater than 500000000 as it is " + to_string(x) + " !!!";
    }
    else if (x == 500000000)
    {
        cout << "The value of x is equal to 500000000 as it is " + to_string(x) + " !!!";
    }
    else
    {
        cout << "The value of x is less than 500000000 as it is " + to_string(x) + " !!!";
    }
}
