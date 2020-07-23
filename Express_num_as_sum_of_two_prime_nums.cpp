#include <iostream>
using namespace std;

int checkPrime(int);                        // function declaration

int main()
{
    int num, i, flag = 0;
    cout << "Enter a number : ";
    cin >> num;
    for (i = 2; i <= num / 2; ++i)
    {
        
        if (checkPrime(i) == 1)            // condition for i to be a prime number
        {
           
            if (checkPrime(num - i) == 1)  // condition for n-i to be a prime number
            {
                cout<<num<<" = "<<num-i<<" + "<<i<<endl;
                flag = 1;
            }
        }
    }
    if (flag == 0)
        cout<<num<<" cannot be expressed as the sum of two prime numbers.";

    return 0;
}

                  
                                                   
    int checkPrime(int n)                  // function to check prime number
{
    int i, isPrime = 1;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}