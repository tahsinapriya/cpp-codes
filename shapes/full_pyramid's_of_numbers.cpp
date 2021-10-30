
#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    for(int i1 = row, i2 = 1, i3 = 0; i1 >= 1 ; i1--, i2++, i3+=2) {
        for(int j = i1 - 1; j >= 1; j--) {
            cout << ".";
        }
        for(int k = i2; k <= i2 * 2 -1; k++) {
            cout << k;
        }
        for(int m = i3; m >= i2; m--) {
            cout << m;
        }
        cout << endl;
    }
}

/*
input : 5
 output :

....1
...232
..34543
.4567654
567898765


