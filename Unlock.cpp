#include <bits/stdc++.h>
using namespace std;
#define int long long

void bestPermutation(int arr[], int k, int n) {
    unordered_map<int, int> h;
    for(int i = 0; i < n; i++) {
        h.insert(make_pair(arr[i], i));
    }
    //if the numbers of swap allowed are equal to number of element
    //then the resulting permutation will be descending order of given permutation
    if(n <= k) {
        sort(arr, arr + n, greater<int>());
    }
    else {
        for(int j = n; j >= 1; j--) {
            if(k > 0) {
                int initial_idx = h[j];
                int best_idx = n - j;
                //if j is not at it's best index
                if(initial_idx != best_idx) {
                    h[j] = best_idx;
                    //change the index of the element which was at position 0 Swap
                    //THe element basically
                    int element = arr[best_idx];
                    h[element] = initial_idx;
                    swap(arr[best_idx], arr[initial_idx]);
                    k--; // decrement number of swaps
                }
            }
        }
    }
}



int32_t main() {
    int n, k;
    cin >> n >> k;
    int arr[10000];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bestPermutation(arr, k , n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}