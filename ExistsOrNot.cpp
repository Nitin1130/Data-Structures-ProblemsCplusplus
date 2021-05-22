#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int test;
    cin >> test;
    
    
    while(test--) {
        int l;
        cin >> l;
        int num;
        map<int, bool> hm;
        for(int j = 0; j < l; j++) {
            cin >> num;
            hm[num] = 1;
        }
        int q;
        cin >> q;
        int query;
        for(int i = 0; i < q; i++) {
            cin >> query;
            if(hm.count(query) > 0) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}