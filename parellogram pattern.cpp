#include <iostream>
using namespace std;

int main() {
    int rows, spaces;

    cout << "Enter rows: ";
    cin >> rows;

    spaces = rows - 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int j = 1; j <= rows; j++) {
            cout << "* ";
        }

        cout << endl;
        spaces--; 
    }

    return 0;
}
