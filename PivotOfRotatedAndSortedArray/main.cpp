#include <iostream>
using namespace std;
int pivotElement(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int ans = 0;
    while(s <= e) {
        int mid = (s + e) / 2;
        if( mid > s && arr[mid] < arr[mid - 1]) {
            ans = mid - 1;
        }
        else if(mid < e && arr[mid] > arr[mid + 1]) {
            ans = mid;
        }
        if(arr[s] >= arr[mid]) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    cout << pivotElement(arr,n) << endl;
    return 0;
}
