#include<iostream>

using namespace std;

int main(){

    int num, digit, large = 0;

    cout << "Enter a number :=";
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;

        if(digit > large){
            large = digit ;
        }
        num /= 10;
    }
    cout << "The large num is :=" << large << endl;

    return 0;
}