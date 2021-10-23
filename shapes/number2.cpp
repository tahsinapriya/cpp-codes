
#include <iostream>

using namespace std;

int main() {
    int row;
    cin>>row;
    for(int i = 1; i <= row * row  -  row + 1 ; i+=row){
        for(int j = i; j <= i + row - 1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
input
2
output
1 2
3 4
*/