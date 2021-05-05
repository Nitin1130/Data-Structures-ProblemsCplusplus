#include<bits/stdc++.h>
using namespace std;



int main() {
    stack<int> st;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        int cost = 0;
        if(arr[i] == 2) {
            cin >> cost;
            st.push(cost);
        }
        else if(!st.empty()) {
            cout << st.top() << endl;
            st.pop();
        }

        else {
            cout << "No Code" << endl;
        }
    }
   
    return 0;
}