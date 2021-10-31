#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    for(int i1 = row -1, i2 = -1; i1 >= 1; i1--, i2+=2) {
        for(int j = i1; j >= 1; j--) {
            cout << " ";
        }
        cout << "*";
        for(int k = 1; k <= i2; k++) {
            cout << " ";
        }
        if(i1 != row -1) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i3 = 1; i3 <= (row -1) *2 +1; i3++) {
        cout << "*";
    }
}

//input : 5
//output:
//    *
//   * *
//  *   *
// *     *
//*********


