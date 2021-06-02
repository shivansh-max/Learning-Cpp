#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter value for 1st number : ";
    cin >> x;
    cout << endl;
    cout << "Enter Value for 2nd number : ";
    cin >> y;
    cout << endl;
    cout << "Sum > " << x + y << endl;
    cout << "Difference > " << x - y << endl;
    cout << "Product > " << x * y << endl;
    cout << "Quatent > " << x / y << "\t Remainder : " << x % y;
}
