#include <iostream>

using namespace std;

int main()
{
    int row;
    cin >> row;
    int space = row - 1;
    int starc = 1;
    for (int i = 1;  i <= row; i++){
        for (int j = 1; j <= space; j++){
            cout << " ";
        }
        space --;
        for(int j = 1; j <= starc; j++){
            cout << "*";
        }
        starc += 2;
        cout << endl;
    }
}
/*input 3
 output
  *
 ***
*****
*/
