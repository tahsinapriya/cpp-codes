#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    for(int i1 = 1; i1 == 1; i1++) {
        cout << "*";
    }
    cout << endl;
    for(int i2 = 1,i3 = 2; i2 <= row -1; i2++, i3++){
        for(int j = 1 ; j == 1; j++) {
            cout << ".";
        }
        for(int k = 1; k <= i3; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*

input = 3
output
*
-**
-***
