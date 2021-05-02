#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while(s <= e) {
        int mid = (s + e) / 2;
        if(arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}
int upperBound(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while(s <= e) {
        int mid = (s + e) / 2;
        if(arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > key) {
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
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q, key,firstOcc, lastOcc;
    cin >> q;
    while(q-- != 0) {
        cin >> key;
        firstOcc = lowerBound(arr,n,key);
        lastOcc = upperBound(arr,n,key);
        cout << firstOcc << " " << lastOcc << endl;
    }


    return 0;
}
