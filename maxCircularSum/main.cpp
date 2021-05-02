#include <iostream>
using namespace std;
int maxSumSubArray(int arr[], int n) {

    // Write your code here
    int res = arr[0], maxEnding = arr[0];
    for(int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
int maxCircularSum(int arr[], int n) {
    int max_normal = maxSumSubArray(arr, n);
    if(max_normal < 0)
        return max_normal;

    //circular sum
    int arr_sum = 0;
    for(int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + maxSumSubArray(arr,n);
    return max(max_normal, max_circular);


}
int main() {
    int test;
    cin >> test;
    while(test-- != 0) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << maxCircularSum(arr, n);
    }
    return 0;
}
