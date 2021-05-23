#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int test;
    cin >> test;
    int w, h, n;
    
    int x[40010], y[40010];
    while(test--) {
        cin >> w >> h >> n;
        if(n == 0) {
            return 0;
        }
        for(int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        //sorting
        sort(x, x + n);
        sort(y, y + n);

        //delta x and delta y
        int dx = x[0];
        int dy = y[0];

        for(int i = 1; i <= n; i++) {
            dx = max(dx, x[i] - x[i - 1]);
            dy = max(dy, y[i] - y[i - 1]);
        }

        //corner case (last tower to grid end)
        dx = max(dx, w + 1 - x[n - 1]);
        dy = max(dy, h + 1 - y[n - 1]);
        cout << ((dx - 1) * (dy - 1)) << endl;

    }
    return 0;
}