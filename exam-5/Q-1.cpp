#include <iostream>

using namespace std;

int main(){
     int size ;

    cout << "enter the size of array : "; // 5 [0,1,2,3,4]
    cin >> size;

    int arr[size];

    for(int  i=0; i < size; i++ ){
        cout << "enter the value : " ;
        cin >> arr[i];
    }

    for(int  i=0; i <size; i++ ){
        cout << arr[i] << " ";  
    }
    cout << endl;
   for (int  i = 0; i < size; i++)
   {
    if(arr[i] < 0){
        cout << "negative num is " << arr[i] << endl;
    }
   }
   

    return 0;
}