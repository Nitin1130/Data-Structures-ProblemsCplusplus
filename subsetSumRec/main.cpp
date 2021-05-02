#include<iostream>
using namespace std;
bool subsetSum(int *arr, int n, int i, int sum, int count) {
    //base case
    if(i == n) {
        if(sum == 0 && count > 0) {
            return true;
        }
        return false;
    }
    //recursive case
    return subsetSum(arr, n , i + 1, sum + arr[i], count + 1) ||
    subsetSum(arr, n, i + 1, sum , count);

}

int main() {
    int test;
    cin >> test;

    while(test-- != 0) {
        int sum = 0, count = 0;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if(subsetSum(arr, n, 0,sum, count)  == 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}