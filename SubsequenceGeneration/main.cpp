#include <iostream>
using namespace std;

void generateSubsequence(char *in, char *out, int i, int j) {
    //base case
    if(in[i] == '\0') {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    //rec case
    //include the current char
    out[j] = in[i];
    generateSubsequence(in, out, i + 1, j + 1);

    //exclude the current char
    generateSubsequence(in, out, i+1, j);

}

int main() {
    char input[] = "abc";
    char output[10];
    generateSubsequence(input, output, 0, 0);
    return 0;
}
