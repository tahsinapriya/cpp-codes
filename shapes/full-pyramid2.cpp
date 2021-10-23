#include <iostream>

using namespace std;

int main() {
    int row;
    cin>>row;
    for(int I1 = row, I2 = 1; I1 >= 1; I1 --, I2 +=2){
        for(int j = 1; j <= I1 - 1; j ++){
            cout << " ";
        }
        for(int k = 1; k <= I2; k ++){
            cout << "*";
        }
        cout << endl;

    }
}
/*
input:
3
output:
  *
 ***
*****
*/