
#include <iostream>

using namespace std;

int main()
{
    int row;
    int count = 1;
    cin >> row;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= i; j++){
            cout<<  count << " ";
            count ++;
        }
        cout << endl;
    }
}

/*input 4
 * output :
1
2 3
4 5 6
7 8 9 10
