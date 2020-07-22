// Program to multiply two float numbers

#include <iostream>
using namespace std;
int main()
{
    float x, y, product;
    cout << " Enter first number : ";
    cin >> x;
    cout << " Enter second number : ";
    cin >> y;
    product = x * y;
    cout << " The product of " << x << " and " << y << " is " << product << endl;
    return 0;
}