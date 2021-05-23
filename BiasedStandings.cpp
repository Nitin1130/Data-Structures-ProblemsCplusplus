#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t absolute(int i, int j) {
    if( i - j > 0) {
        return i - j;
    }
    return j - i;
}

int32_t main() {
    int arr[1000000] = {0};
    int t, n;
    cin >> t;

    while(t--) {
        memset(arr, 0, sizeof arr);
        string name;
        int n, rank;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> name >> rank;
            arr[rank]++;
        }

        //Greedy Approach - assign the team nearest rank available
        int actual_rank = 1;
        int sum = 0;
        for(int i = 0; i <= n; i++) {
            while(arr[i]) {
                sum += absolute(actual_rank, i);
                arr[i]--;
                actual_rank++;
            }
        }
        cout << sum << endl;
    }
     
    return 0;
}