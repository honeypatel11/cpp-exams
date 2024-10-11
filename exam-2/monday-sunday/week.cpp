#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << " enter the day : ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << " its a monday";
        break;
    case 2:
        cout << " its a tuesday";
        break;
    case 3:
        cout << " its a wednesday";
        break;
    case 4:
        cout << " its a Thursday";
        break;
    case 5:
        cout << " its a friday";
        break;
    case 6:
        cout << " its a saturday";
        break;
    case 7:
        cout << " its a Sonday";
        break;

    default:
        cout << " invalid day in week : ";
        break;
    }

    return 0;
}