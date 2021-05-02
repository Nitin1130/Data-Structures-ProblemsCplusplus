#include <iostream>
#include <cstring>

int stringToInt(char *a, int n) {

    //base case
    if(n == 0) {
        return 0;
    }
    int digit = a[n - 1] - '0';
    int smallAns = stringToInt(a, n - 1);
    return smallAns * 10 + digit;
}
using namespace std;
int main() {
    char a[] = "1234";
    int len = strlen(a);
    int cc = stringToInt(a, len);
    cout << cc << endl;
    cout << cc + 1 << endl;
    return 0;
}
