#include <iostream>
#include<algorithm>
using namespace std;

void linearSort(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int mid = 0;
    while(mid  <= end) {
        if(arr[mid] == 0) {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[end]);
            end--;
        }
    }

}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    linearSort(arr,n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
