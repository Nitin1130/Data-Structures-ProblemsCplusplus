#include <iostream>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test-- != 0) {
        string n, m;
        cin >> n >> m;
        for(int i = 0; i < n.length(); i++) {
            if(n[i] == m[i])
            {
                cout << "0";

            }
            else
            {
                cout << "1";
            }
        }

    }
    return 0;
}
