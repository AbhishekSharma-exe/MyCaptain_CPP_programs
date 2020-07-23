#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, *ptr;
    ptr = NULL;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << endl;
    ptr = array;
    cout << "The elements in the array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}