#include <iostream>

using namespace std;

int main()
{
    int Marks;

    cout << " enter your Marks : ";
    cin >> Marks;

    if (Marks >= 95)
    {
        cout << " A grade ";
    }
    else if (Marks >= 80)
    {
        cout << " B grade ";
    }
    else if (Marks >= 65)
    {
        cout << " C grade ";
    }
    else if (Marks >= 40)
    {
        cout << " D grade ";
    }
    else
    {
        cout << "Fail  ";
    }

    return 0;
}
