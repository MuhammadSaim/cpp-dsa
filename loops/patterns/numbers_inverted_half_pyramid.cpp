#include <iostream>

using namespace std;

int main(){

    int rows;

    cout << "Enter numbers of Rows: ";
    cin >> rows;

    for(int i=rows; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}