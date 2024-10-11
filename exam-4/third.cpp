#include <iostream>

using namespace std;

int main(){
    int i , j , num=11  ;


    for(i=5 ; i>=1 ; i--){

       
        for(j= i ; j<= 4 ; j++){
             cout << num ++ << " " ;

        }
        cout << endl; 
      
    }

    return 0;

}
    // 5
    // 4 5
    // 3 4 5
    // 2 3 4 5
    // 1 2 3 4 5
     