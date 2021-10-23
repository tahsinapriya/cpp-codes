#include <iostream>

using namespace std;

int main() {
    int row;
    cin>>row;
    for(int i = row; i >= 1; i--){
        for(int j = 1; j <= row ; j++){
            cout << j;

        }
        cout<<endl;
    }
}
/*
input:
3
output:
123
123
123
*/