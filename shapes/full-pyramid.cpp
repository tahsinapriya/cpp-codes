#include <iostream>

using namespace std;

int main() {
    int row;
    cin >> row;
    for(int i1 = row, i2 = 1; i1 >= 1; i1--, i2 ++) {
        for(int j = i1-1; j >= 1; j--) {
            cout << " ";
        }
        for(int k = i2; k >= 1; k--){
            cout << "*";
        }
        for(int m = i2-1; m >= 1; m--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
/*
input:
3
output:
  *
 ***
*****
*/