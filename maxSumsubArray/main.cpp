#include <iostream>
#include<climits>
using namespace std;
int maxSumSubArray(int arr[], int n) {

    // Write your code here
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here =  max_ending_here + arr[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        } if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;


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
        int maxSum =  maxSumSubArray(arr, n);
        cout << maxSum;
    }
    cout << endl;
    return 0;

}
