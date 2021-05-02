#include <iostream>
using namespace std;
char mapping[][27]={"", "A", "B", "C", "D", "E",
                    "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R",
                    "S", "T", "U", "V", "W", "X", "Y", "Z"};

void change(string s, string out, int count) {
    int len = s.length();
    if(count == len) {
        cout << out << endl;
        return;
    }
    //rec
    if(s[count] != '0') {
        int num = s[count] - '0';
        string ch = mapping[num];
        change(s, out + ch, count + 1);
    }
    if(count < len - 1) {
        int num2 = s[count] - '0';
        int num3 = s[count + 1] - '0';
        int num4 = (num2 * 10) + num3;
        if(num4 <= 26) {
            string ch1 = mapping[num4];
            change(s, out + ch1, count + 2);
        }
    }

}

int main() {
    string input;
    cin >> input;
    change(input, "", 0);
    return 0;
}
