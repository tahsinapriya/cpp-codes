#include <iostream>

using namespace std;

int main() {
    int row;
    cin >> row;
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i - 1; j++) {
            cout << ".";
        }
        cout << "*";
        cout << endl;
    }
    for(int i1 = row - 1; i1 >= 1; i1--) {
        for(int k = i1 -1; k >= 1; k--) {
            cout << ".";
        }
        cout << "*";
        cout << endl;
    }
}
/*
 input: 3
 output:
*
.*
..*
.*
*
