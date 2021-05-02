#include <iostream>
using namespace std;

int harvestWater(int height[], int n) {
    int left = 0, right = n - 1;
    int ans = 0;
    int left_max = 0, right_max = 0;
    while(left < right) {
        if(height[left] < height[right]) {
            height[left] >= left_max ? (left_max = height[left]) : ans += left_max - height[left];
            left++;
        }
        else {
            height[right] >= right_max ? (right_max = height[right]) : ans += right_max - height[right];
            right--;
        }
    }
    return ans;
}
int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << harvestWater(arr, n);
    return 0;
}
