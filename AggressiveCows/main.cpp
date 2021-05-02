#include <iostream>
#include<algorithm>
using namespace std;

bool canPlaceCows(int stalls[], int n, int c, int min_sep) {

    int last_cow = stalls[0];
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(stalls[i] - last_cow  >= min_sep) {
            last_cow = stalls[i];
            cnt++;
            if(cnt == c) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int test=1;//u have only single test case per file
   // cin >> test;
    while(test-- != 0) {
        int n, cows;

        cin >> n >> cows;

        //cin >> cows;removed
        int stalls[n];
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        sort(stalls,stalls+n);//added : u need to sort the arrray explicitly
        int s = 0;
        int e = stalls[n - 1] - stalls[0];

        int ans = 0;

        while (s <= e) {
            int mid = (s + e) / 2;
            bool cowsRakhPaye = canPlaceCows(stalls, n, cows, mid);
            if (cowsRakhPaye == true) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
