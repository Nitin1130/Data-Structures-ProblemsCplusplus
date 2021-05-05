#include<bits/stdc++.h>
using namespace std;

long long int getMaxArea(long long int arr[], long long int n) {
    stack< long long int> st;

    long long int maxArea = 0;
    long long int top;
    long long int area_with_top;
    long long int i = 0;
    while( i < n) {
        if(st.empty() || arr[st.top()] <= arr[i]) {
            st.push(i++);
        }

        else {
            top = st.top();
            st.pop();

            area_with_top = arr[top] * (st.empty() ? i : i - st.top() - 1);

            if(maxArea < area_with_top) {
                maxArea = area_with_top;
            }
        }
    }
    while(st.empty() == false) {
        top = st.top();
        st.pop();
        area_with_top = arr[top] * (st.empty() ? i : i - st.top() - 1);
        if(maxArea < area_with_top) {
            maxArea = area_with_top;
        }
    }
    return maxArea;
}


int main() {
    long long int n;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << getMaxArea(arr, n);
	return 0;
}