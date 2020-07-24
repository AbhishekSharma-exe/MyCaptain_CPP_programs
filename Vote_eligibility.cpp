#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    string name;
    cout << " Enter your name : ";
    cin>>name;
    int c = name[0];
    c = toupper(c);
    name[0] = c;
    cout << endl
         << " Hi " << name << "!" << endl
         << " Enter your age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Congratulations " << name << "!"
             << " You are eligibile to give vote. ";
    }
    else if (age < 0)
    {
        cout << " Invalid age! " << endl;
    }
    else
    {
        cout << name << ",You are not eligibile to give vote." << endl
             << "You can give vote in next " << 18 - age << " year(s)";
    }

    return 0;
}