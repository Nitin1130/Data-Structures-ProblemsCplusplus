#include <iostream>
#include <algorithm>


using namespace std;
int target_sumPairs(int arr[100], int n, int target) {
    int currSum = 0;
    int i = 0;
    int j = n - 1;
     while (i < j) {
         currSum = arr[i] + arr[j];

         if (currSum > target) {
             j--;
         } else if(currSum < target){
             i++;
         } else if (currSum == target) {
             cout << arr[i] << " and " << arr[j]<< endl;
             i++;
             j--;
         }
     }

    return 0;
}
int main() {

    int n;
    cin >> n;
    int arr[n];

    //input
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int target;
    cin >> target;



    target_sumPairs(arr,n,target);


    return 0;
}
