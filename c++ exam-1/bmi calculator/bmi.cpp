#include<iostream>

using namespace std;

int main(){
    float w , h , bmi ;

    cout << "enter the value of kilogram w and enter the value of meter  h : " ;
    cin  >>  w >> h ;

    cout << "find the bmi value : " <<( w / (h * h ));
    return 0;
}