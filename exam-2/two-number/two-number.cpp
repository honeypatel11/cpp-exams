#include <iostream>

using namespace std;

int main()
{
    int n1, n2, choice;

    cout << "  enter your 1 addition\n  enter your 2 subtraction\n  enter your 3 multiplication\n  enter your 4 division\n enter your 5 not valid arithmetic operation \n";

    cout << " enter the number n1 : ";
    cin >> n1;

    cout << " enter the number n2 : ";
    cin >> n2;

    cout << " enter the number choice : "; // 1 to 4
    cin >> choice;

    if (choice == 1)
    {

        cout << " addition of two value  := " << n1 + n2;
    }
    else if (choice == 2)
    {
        cout << " subtraction of two value  := " << n1 - n2;
    }
    else if (choice == 3)
    {
        cout << " multiplication of two value  := " << n1 * n2;
    }
    else if (choice == 4)
    {
        cout << " division of two value  := " << n1 / n2;
    }
    else
    {
        cout << " not valid arithmetic operation ";
    }

    return 0;
}