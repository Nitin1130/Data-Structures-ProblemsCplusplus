#include <iostream>
using namespace std;

int ladderJump(int n, int k) {
    if(n == 0) {
        return 1;
    }
    if(n < 0) {
        return 0;
    }
    int res = 0;
    for(int i = 1; i <= k; i++)  {
        res += ladderJump(n - i, k);
    }
    return res;
}
int main() {
    int n, k;
    cin >> n >> k;
    cout << ladderJump(n, k) << endl;

    return 0;
}
