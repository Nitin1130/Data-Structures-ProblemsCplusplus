#include <iostream>
using namespace std;
int main() {
    int n, num,cnt[64] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        //updae count array by extracting bits
        int j = 0;
        while(num > 0) {
            int last_bit = (num & 1);
            cnt[j] += last_bit;
            j++;
            num = num >> 1; // right shift 1
        }
    }
    //iterate over the array and form the answer by converting 0's and 1's into a number
    int p = 1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cnt[i] %= 3;
        ans += (cnt[i] * p);
        p = p << 1;

    }
    // print te ans
    cout << ans << endl;

    return 0;
}
