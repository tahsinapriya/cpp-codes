#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    for(int i1 = row, i2 = 1; i1 >= 1 ; i1--, i2+=2) {
        for(int j = i1 - 1; j >= 1; j--) {
            cout << " ";
        }
        for(int k = 1; k <= i2; k++) {
            cout <<  "*";
        }
        cout << endl;
    }
    for(int i3 = 1, i4 = (row -1) * 2 -1; i3 <= row -1; i3++, i4-=2) {
        for(int m = 1; m <= i3; m++) {
            cout << " ";
        }
        for(int l = 1; l <= i4; l++){
            cout << "*";
        }
        cout << endl;
    }
}

/*
input : 3
output

  *
 ***
*****
 ***
  *


