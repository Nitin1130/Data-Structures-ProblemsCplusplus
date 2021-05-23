#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cost[n];
        int petrol[n];
        for(int i = 0; i < n; i++) {
            cin >> cost[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> petrol[i];
        }
        int min_cost = cost[0];
        int total = min_cost * petrol[0];
        for(int i = 1; i < n; i++) {
            if(min_cost > cost[i]) {
                min_cost = cost[i];
                total = total + min_cost * petrol[i];
                continue;
            }
            else {
                total = total + min_cost * petrol[i];
                continue;
            }
        }
        cout << total << endl;
    }
    
    return 0;
}