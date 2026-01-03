#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    int arr[x][y][z];

    // Input
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    // Output
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
