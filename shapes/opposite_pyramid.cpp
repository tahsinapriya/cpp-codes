#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    for(int i1 = 1, i2 = row * 2 -1; i1 <= row; i1 ++, i2 -=2){
        for(int j = 1; j <= i1 -1; j++){
            cout << " ";
        }
        for(int k = 1; k <= i2; k++){
            cout << "*";
        }
        cout << endl;
    }
}
/* input 3
 output
 *****
  ***
   *
