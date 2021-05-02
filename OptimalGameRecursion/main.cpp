#include <iostream>
#include<algorithm>
using namespace std;

int optimalGameRec(int *arr, int i, int j, int sum) {
    //base case
    if(j == i + 1) {
        return max(arr[i],arr[j]);
    }

    return max(sum - optimalGameRec(arr, i + 1,j, sum - arr[i]),
            sum - optimalGameRec(arr, i, j - 1, sum - arr[j]));

}



int main() {
    int n;
    cin >> n;
    int sum = 0;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << optimalGameRec(arr,0,n-1,sum);

    return 0;
}
