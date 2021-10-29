#include <iostream>

using namespace std;

int main() {
    int row;
    cin >> row;
    for(int i = 1; i <= row; i++) {
        cout << "*";
    }
    cout << endl;
    for(int i1 = 1; i1 <= row -2; i1++) {
        cout << "*";
        for(int j = 1; j <= row -2; j++) {
            cout << ".";
        }

        cout << "*";
        cout << endl;
    }
    for(int i = 1; i <= row; i++) {
        cout << "*";
    }

}

/*
input 5
output
*****
*...*
*...*
*...*
*****
