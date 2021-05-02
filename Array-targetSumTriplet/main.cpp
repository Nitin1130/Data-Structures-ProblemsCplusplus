#include <iostream>
#include <algorithm>
using namespace std;
void tripletSum(int arr[1000], int n, int target) {
    int l, r, currSum;
    for (int i = 0; i < n; i++) {

        l = i + 1;
        r = n - 1;

        while (l < r) {
            int currSum = arr[l] + arr[r] + arr[i];
            if(target == currSum) {
                cout<< arr[i] << ", " << arr[l] << " and " << arr[r] << endl;
                l++;
                r--;
            }
            else if(currSum < target)
                l++;
            else if(currSum > target)
                r--;
        }

    }

}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int target;
    cin >> target;

    tripletSum(arr, n, target);

    return 0;
}


