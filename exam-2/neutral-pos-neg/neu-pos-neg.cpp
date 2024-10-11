#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "  enter the number : ";
    cin >> n;

    if (n == 0)
    {
        cout << "  Neutral Number ";
    }
    else if (n >= 0)
    {
        cout << "  Positive  Number ";
    }
    else if (n <= 0)
    {
        cout << "  Negative  Number ";
    }

    return 0;
}