#include<bits/stdc++.h>
using namespace std;

void uniqueCombinations(int l, int sum, int target, vector<int>& local, vector<int>& arr) {
    //if a unique combination is found
    if(sum == target) {
        for(int i = 0; i < local.size(); i++) {

            cout << local[i] << " ";
            
            

        }
        cout << endl;
        return;
    }
    // for all other combinations
    for(int i = l; i < arr.size(); i++) {
        //check if the sum exceeds target
        if(sum + arr[i] > target) {
            continue;
        }
        //check if it is repeated or not
        if(i > l and arr[i] == arr[i -1]) {
            continue;
        }
        //take the element into the combination
        local.push_back(arr[i]);
        //recursive call
        uniqueCombinations(i + 1, sum + arr[i], target, local, arr);
        local.pop_back();

    }
}

void combinations(vector<int> arr, int target) {
    //sort the given elements
    sort(arr.begin(), arr.end());
    //to store combinations
    vector<int> local;
    uniqueCombinations(0, 0, target, local, arr);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    // for(auto it = arr.begin(); it != arr.end(); ++it) {
    //     cout << *it << " ";
    // }
    int target;
    cin >> target;
    combinations(arr, target);
}