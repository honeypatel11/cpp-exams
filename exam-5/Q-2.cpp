#include <iostream>

using namespace std;

int main(){

    int  size,max=0;

    cout << "enter the size of array : ";
    cin >> size;

    int arr[size];

    for(int  i=0; i <size; i++ ){
        cout << "enter the value : " ;
        cin >> arr[i];
       
    }
    for(int  i=0; i <size; i++ ){
        cout << arr[i] << " ";  
    }
    for(int  i=0; i <size; i++ ){
        if(max < arr[i]){
            max = arr[i];
        }  
    }
    cout << "Max is : " << max;

 

    return 0;
}