#include<iostream>

using namespace std;

int main(){

    int sy, ey;

    cout <<"Enter the Start year :=";
    cin >> sy;

    cout <<"Enter the End year :=";
    cin >> ey;

    cout << "Leap years between " << sy <<" and " << ey <<":- \n";

    for(int year = sy; year <= ey; year++){

        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            cout << year << " ";
        }
    }

    cout << endl;

    return 0;
}