#include <iostream>


using namespace std;

int main(){

    int  x,y,z;

    cout << "enter the value of x and y and z : ";
    cin >> x >> y >> z;


    if(x > y ){
        cout << "x is max num  " ;

    }else if(y > z){
        cout << "y is max num  ";
    }else{
        cout << "z is max num  ";
    }
 

    return 0;
}