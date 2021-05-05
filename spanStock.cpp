#include<bits/stdc++.h>
using namespace std;

void stockSpan(int prices[], int n, int span[]){
    stack<int> st;
    st.push(0);
    span[0] = 1;

    for(int i = 1; i <= n - 1; i++) {
        int currentPrice = prices[i];
        while(!st.empty() and prices[st.top()] <= currentPrice) {
            st.pop();
        }
        if(!st.empty()) {
            int prev_highest = st.top();
            span[i] = i - prev_highest;
        }
        else {
            span[i] = i + 1;
        }

        // push the element
        st.push(i);

    }


}

int main() {
    int n;
    cin >> n;
    int span[100005] = {0};
    int prices[n];
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    stockSpan(prices, n, span); 
    for(int i = 0; i < n; i++) {
        cout << span[i] << " ";
    }
    cout << "END";
    return 0;
}