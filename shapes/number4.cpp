#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    for (int i = 1;  i <= row; i++){
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}
/* input 3
 output

1
22
333