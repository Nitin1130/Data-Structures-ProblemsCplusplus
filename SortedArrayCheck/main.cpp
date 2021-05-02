#include <iostream>
using namespace std;

bool checkSortedArray(int *a, int n) {
    //base case
    if(n == 1 || n == 0) {
        return true;
    }

    if(a[n - 1] < a[n - 2]) {
        return false;
    }
    return checkSortedArray(a, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     if(checkSortedArray(arr, n)) {
         cout << "true";
     }
     else{
         cout << "false";
     }
    return 0;
}
