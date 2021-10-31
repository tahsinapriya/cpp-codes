#include <iostream>

using namespace std;

int main()
{
    int row;
    int colm;
    cout << "row : " << endl;
    cin >> row;
    cout << "colm: " << endl;
    cin >> colm;
    for(int i1 = 1; i1 <= colm; i1++) {
        cout << "*";
    }
    cout << endl;
    for(int i2 = row - 2; i2 >= 1; i2--) {
        cout << "*";
        for(int j = 1; j <= colm -2; j++) {
            cout << ".";
        }
        cout << "*";
        cout << endl;
    }
    for(int i3 = 1; i3 <= colm; i3++) {
        cout << "*";
    }
    cout << endl;
}

/*
input:
row :
5
colm:
9
 output:
*********
*.......*
*.......*
*.......*
*********


 */