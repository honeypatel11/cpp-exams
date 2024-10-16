#include<iostream>

using namespace std;

int main(){
     
     int size , choice , idx = 0;

     cout << "Enter the size of array :";
     cin >> size;

     int arr[size];

     do {
          cout << endl << "enter your choice : ";
          cin >> choice;

          switch (choice){
               case 1:
                  if(idx >= size){
                    cout << "Array Overflow ..." << endl;
                    break;
                  }
                  int value;

                  cout << "Enter The value for insertion : ";
                  cin >> value;

                  arr[idx] = value;
                  idx++;
                  break;
               case 2:
               for(int val : arr){
                    cout << val << " ";
               }
                 break; 
               case 3:
                  int index, updatedvalue;

                  cout << "Enter the updated index : ";
                  cin >> index;

                  cout << "Enter the updated value : ";
                  cin >> updatedvalue;

                  arr[index] = updatedvalue;
                  cout << "Updated value is : ";
                 break;
               case 4:
                  int v;

                  idx--;
                  v = arr[idx];
                  arr[idx] = 0;

                  cout << "Deleted Element : " << v;
                  break;
               case 5:
                  cout << "Thank you....";
                 break;
               default:
               break;
          }
          
          }while (choice != 5);
          
           return 0;
     }

    