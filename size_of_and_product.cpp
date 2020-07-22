// Program for implemetation and usage of sizeof() operator

#include<bits/stdc++.h> 
using namespace std;
int main()
{
    cout << endl << "Program for implemetation and usage of sizeof() operator"<<endl<<endl;
    cout << "Size of int:    " << sizeof(int) << " bytes" << endl;
    cout << "Size of char:   " << sizeof(char) << " byte" << endl;
    cout << "Size of float:  " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << endl
         << endl;

    // Program to multiply two float numbers

    cout << "Program to multiply two float numbers"<<endl<<endl;
    float x, y, product;
    cout << "Enter first number  : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    product = x * y;
    cout << "The product of " << x << " and " << y << " is " <<fixed<<setprecision(1)<< product << endl;

    return 0;
}
