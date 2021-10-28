#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    for(int i1 = 1; i1 <= row; i1++){
        for(int j = 1; j <= i1; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i2 = row - 1; i2 >= 1; i2--){
        for(int k = 1; k <= i2; k++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
/* input 3
 output
*
**
***
**
*
