#include <iostream>
using namespace std;
int main() {
    string input;
    cin >> input;
    for(int i = 0; i < input.length() - 1; i++) {
        cout << input[i] << input[i + 1] - input[i];
    }
    cout << input[input.length() - 1];

    return 0;
}
