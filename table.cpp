#include <iostream>

using namespace std;

int main(){
    int num  , i=1;


    cout << "enter the num : ";
    cin >> num;


    while(i <= 10){
        cout << num << " * " << i << " = " << num * i << endl;
        i++;

    }
      

    return 0;
}