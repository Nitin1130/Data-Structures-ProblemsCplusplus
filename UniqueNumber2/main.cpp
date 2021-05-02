#include <iostream>
using namespace std;
int main() {
    int n,num,arr[100005];
    cin >> n;
    int res = 0;
    for(int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = num;
        res = res ^ num;
    }
    //res = a ^ b;
    int temp = res;
    int pos = 0;
    while((temp & 1) != 1) {
        pos++;
        temp = temp + 1;
    }
    //The first bit in res is at position 'pos'
    int mask = (1 << pos);

    //find those numbers which contain set bit at postion pos
    int x = 0;
    int y = 0;
    for(int i = 0; i < n; i++) {
        if((arr[i] & mask) > 0) {
            x = x ^ arr[i];
        }
    }
    y = res ^ x;

    cout << min(x,y) << " " << max(x, y) << endl;
    return 0;
}
