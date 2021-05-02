#include <iostream>
#define int long long
using namespace std;

int numOfPaintersReq(int arr[], int n,  int curr_time) {
    int numOfPainters = 1;
    int timeTaken = 0;
    for(int i = 0; i < n; i++) {
        if(timeTaken + arr[i] > curr_time) {
            numOfPainters++;
            timeTaken = arr[i];
        }
        else {
            timeTaken += arr[i];
        }
    }
    return numOfPainters;
}

int findTime(int arr[], int n, int k) {
    int sum = 0, mx = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    int s = mx;
    int e = sum;
    int ans = 0;
    while(s <= e) {
        int mid = (s + e) / 2;
        if(numOfPaintersReq(arr,n,mid) <= k) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}
int32_t main() {
    int n, k, timeToPrint;
    cin >> n >> k >> timeToPrint;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (timeToPrint * findTime(arr, n, k)) % 10000003 << endl;
    return 0;
}
