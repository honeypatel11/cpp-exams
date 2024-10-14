#include <iostream>

using namespace std;

int main(){
    int col,row;

    cout << "enter the col :";
    cin >> col;

    cout << "enter the row : ";
    cin >> row;
    

    int arr[row][col];
    int arr1[row][col];

    for(int i = 0; i < row ; i++){
        for(int j =0; j < col ; j++){
            cout << "enter the value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < row ; i++){
        for(int j =0; j < col ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < row ; i++){
        for(int j =0; j < col ; j++){
            arr1[i][j] = arr[j][i];
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}