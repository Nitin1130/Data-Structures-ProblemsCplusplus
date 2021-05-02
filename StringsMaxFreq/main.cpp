#include <iostream>

#define ASCII_SIZE 256
using namespace std;
int main() {
    string str;
    cin >> str;
    int count[ASCII_SIZE] = {0};
    int max = 0;
    char result;
    for(int i = 0; i < str.length(); i++) {
        count[str[i]]++;
        if(max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }

    }
    cout << result;
    return 0;
}
