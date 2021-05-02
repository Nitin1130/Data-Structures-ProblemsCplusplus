#include <iostream>
using namespace std;

void moveAtEnd(string input, int i , int len) {
    //base case
    if( i >= len) {
        return;
    }
    char curr = input[i];

    if(curr != 'x') {
        cout << curr;
    }
    //rec case
    moveAtEnd(input, i + 1, len) ;
    if(curr == 'x') {
        cout << curr;
    }
    return;
}

int main() {
    string input;
    cin >> input;
    int len = input.length();
    moveAtEnd(input, 0, len);
    return 0;
}
