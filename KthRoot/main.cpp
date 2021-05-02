#include <iostream>
#include<cmath>
using namespace std;

bool isAnswer(long long int n, long long int k, long long int ans) {
    if(pow(ans, k) <= n) {
        return true;
    }
    return false;
}
long long int binaryRoot(long long int n, long long int k) {
    long long int s = 1, e = n;
    long long int ans = 0;
    while(s <= e) {
        long long int mid = (s + e) / 2;
        if(isAnswer(n, k, mid) == true) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int test;
    cin >> test;
    while(test-- != 0) {
        long long int n, k;
        cin >> n >> k;

        cout << binaryRoot(n, k) << endl;

    }
    return 0;
}
