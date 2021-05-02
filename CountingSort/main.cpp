#include<iostream>
#include<algorithm>
using namespace std;
#define int long long

void countSort(int arr[], int n) {
    //output array to store the sorted array
    int output[n];

    int mx = arr[0], maxelement = 0;
    int i;
    for( i = 1; i < n; i++) {
        mx= max(arr[i], mx);//updated mx
    }

    maxelement=mx;

    int count[maxelement+1]={0};//initialise with zero, size shpuld be atleast maxelement + 1 ,becuase we want to access maxelement index
    for(i = 0; i < n; ++i) { //why till maxelement? u have to iterate from 0 to n-1
        ++count[arr[i]];
    }


    for(i = 1; i <= maxelement; ++i) {
        count[i] += count[i - 1];
    }

    for(i = n - 1; i >= 0; --i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }

    for(i = 0; i < n; ++i) {
        arr[i] = output[i];
    }

}

int32_t main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countSort(arr,n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}