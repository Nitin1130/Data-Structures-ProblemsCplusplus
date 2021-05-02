#include <iostream>
using namespace std;
int search(int arr[1000][1000], int n, int x) {
    if(n == 0)
        return -1;
    int smallest = arr[0][0], largest = arr[n-1][n-1];
    if(x < smallest || x > largest)
        return -1;
    int i = 0, j = n - 1;
    while(i < n && j >= 0)
    {
        if(arr[i][j] == x)
        {
            cout<<"Found at" << i << ", " <<j;
            return 1;
        }
        if(arr[i][j] > x)
            j--;

        else
            i++;

    }
    cout<< "Element not found";
    return 0;
}
int main() {
    int x ;
    cin>>x;
    int arr[1000][1000],n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) {
            cin>> arr[i][j];
        }
    }
    search(arr, n , x);
}
