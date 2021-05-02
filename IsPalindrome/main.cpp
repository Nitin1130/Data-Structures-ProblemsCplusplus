#include <iostream>
using namespace std;
bool isPalindrome(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(isPalindrome(a, n) == 1)
        cout << "true";

    else
        cout << "false";
    return 0;
}
