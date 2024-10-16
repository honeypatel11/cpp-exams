#include <iostream>


using namespace std;

int main(){

    int  value;

    cout << "enter the value  : ";
    cin >> value;


    if(value == 0 ){
        cout << "nuetral num is  " ;

    }else if(value > 0){
        cout << "pos num is  ";
    }else{
        cout << "neg num is  ";
    }
 

    return 0;
}