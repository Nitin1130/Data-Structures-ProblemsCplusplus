#include<iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int arr[100][100];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    //wave printing
    for(int col = 0; col < n; col++) {
        if(col % 2 == 0) {
            //even col top-down
            for(int row = 0; row < m; row++) {
                cout << arr[row][col] << " ";
            }
        }
        else {
            //bottom-up direction
            for(int row = m-1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
        return 0;
}