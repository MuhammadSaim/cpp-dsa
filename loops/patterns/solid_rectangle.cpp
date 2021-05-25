#include <iostream>

using namespace std;


int main(){

    int rows, cols;

    cout << "Enter number of Rows: ";
    cin >> rows;
    cout << "Enter number of Cols: ";
    cin >> cols;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}