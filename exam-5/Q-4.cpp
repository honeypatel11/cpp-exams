#include <iostream>

using namespace std;

int main(){
    int colSize, rowSize, colNum, rowNum, sum = 0;

    cout << "enter the col :";
    cin >> colSize;

    cout << "enter the row : ";
    cin >> rowSize;

    int arr[rowSize][colSize];

    for(int i = 0; i < rowSize ; i++){
        for(int j =0; j < colSize ; j++){
            cout << "enter the value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < rowSize ; i++){
        for(int j =0; j < colSize ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Enter index no for row : ";
    cin >> rowNum;

    for(int k = 0; k < rowSize; k++){
        sum = sum + arr[rowNum][k];
    }
    cout << "Sum of row : " << sum;
    cout << endl;

    sum = 0;

    cout << " enter the index of col:";
   cin >>colNum;

   for(int k=0; k<colSize; k++){
    sum = sum+ arr[k][colNum];
   }
   cout << "enter the col :" << sum;
    return 0;
}