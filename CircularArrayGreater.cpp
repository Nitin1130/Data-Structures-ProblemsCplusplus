#include<bits/stdc++.h>
using namespace std;

void printNextGreater(int *arr, int n){
    //Stack Initialization 
    stack<int> st;
    int nge[n], i = 0;
    //Initialize nge[] arr to -1
    for(i = 0; i < n; i++) {
        nge[i] = -1;
    }
    i = 0;

    //Traverse the array
    while(i < 2 * n) {
        while(!st.empty() && arr[i % n] > arr[st.top()]) {
           //Assign next greater element
           //for the top element of the stack
           nge[st.top()] = arr[i % n];

           //pop the top element
           st.pop();

        }
        st.push(i % n);
        i++;
    }
    //print the arr
    for(i = 0; i < n; i++) {
        cout << nge[i] << " ";
    }
}


int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printNextGreater(arr,n);
    return 0;

}