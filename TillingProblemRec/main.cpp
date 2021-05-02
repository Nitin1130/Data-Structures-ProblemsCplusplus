#include <iostream>
using namespace std;

int placeTiles(int n) {
    //base case;
    if(n <= 3) {
        return 1;
    }

    int res = placeTiles(n - 1) + placeTiles(n - 4);
    return res;
}
int main() {
    int n;
    cin >> n;
    cout << placeTiles(n) << endl;

    return 0;
}
