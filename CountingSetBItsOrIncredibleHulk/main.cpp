#include <iostream>
using namespace std;

int countBits(int n) {
    int ans = 0;
    while( n > 0 ) {
        ans += (n & 1);
        n = n >> 1;


    }
    return ans;
}
//second method

int countBitsFast(int n) {
    int ans = 0;
    while(n > 0) {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}
int main() {
    int n;

    cin >> n;
    int num;
    for(int i = 0 ; i < n; i++) {
        cin >> num;
        cout << countBitsFast(num) << endl;
    }


    return 0;
}
