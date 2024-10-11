#include<iostream>

using namespace std;

int main(){
 float a , b , H;

    cout << "enter the value of a , and b and H : " ;
    cin >> a >> b >> H ;

    cout << "find the trapezoid : " << ((a + b) / 2 * H) ;

    return 0;
}