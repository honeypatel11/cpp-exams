#include <iostream>

using namespace std;

// int main(){
//     int a = 65 , b = 45 , c ;

//     // cout << "enter the value of a and b  : " ;
//     // cin  >> a >> b ;

//     cout <<"value of traingle c : " << (180 - (a + b));
//     return 0;
// }
int main()
{

    int len, sum = 0;
    cin >> len;
    int ar[6] = {1, 2, 3, 4, 10, 11};

    for (int i = 0; i < 6; i++)
    {
        sum = sum + ar[i];
    }
    cout << sum;

    return 0;
}