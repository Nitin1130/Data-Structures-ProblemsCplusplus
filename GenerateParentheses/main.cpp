#include <iostream>
using namespace std;

void generateParentheses(string str, int n, int open, int close) {
    if(close == n) {
        cout << str << endl;
        return;
    }
    else {
        if (open > close) {
            generateParentheses(str + ")", n, open, close + 1);
        }
        if (open < n) {
            generateParentheses(str + "(", n, open + 1, close);
        }
    }

}


int main() {
    string str = "";

    int n;
    cin >> n;
    generateParentheses(str, n,  0, 0);
    return 0;
}
