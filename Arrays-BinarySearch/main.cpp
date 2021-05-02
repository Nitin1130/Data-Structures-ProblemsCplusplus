#include <iostream>

using namespace std;

long long int binarySearchArray(long long int arr[], long long int n, long long int key) {
    long long int s = 1, e = n;
    long long int ans = 0;
    while(s <= e) {
        long long int mid = (s + e) / 2;
        if(arr[mid] == key) {
            ans = mid;
        }
        if(arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {

    long long int n;
    cin >> n;
    long long int arr[n];
    for(long long int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearchArray(arr,n,key) << endl;
    return 0;
}
