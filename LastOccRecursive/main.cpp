#include <iostream>
using namespace std;

int lastOccRec(int *a, int key, int i) {
    // base case
    if(i < 0) {
        return -1;
    }
    if(a[i] == key) {
        return i + 1;
    }
    //recursive case
    return lastOccRec(a, key, i - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << lastOccRec(arr, key, n-1) << endl;
    return 0;
}
