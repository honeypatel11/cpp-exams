#include<iostream>

using namespace std;

int main(){

    int num, fd, ld;

    cout << "Enter a Number : ";
    cin >> num;

    ld = num % 10;

    fd = num;
    while(fd >= 10){
        fd /= 10;
    }

    int sum = fd + ld;

    cout << "Sum of the fd and ld :=" << sum << endl;

    return 0;
}