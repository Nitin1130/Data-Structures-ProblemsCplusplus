#include<bits/stdc++.h>
using namespace std;

stack<int> st;

void print()
{
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}

void insertAtBottom(int x) {
    if(st.size() == 0)
        st.push(x);
    else {
        int a = st.top();
        st.pop();
        insertAtBottom(x);
        st.push(a);
    }
}

void reverse() {
    if(st.size() > 0) {
        char x = st.top();
        st.pop();
        reverse();

        insertAtBottom(x);
    }
}


int main() {
    int n;
    cin >> n;
    int input;
    
    for(int i = 0; i < n; i++) {
        
        cin >> input;
        st.push(input);
    }
    reverse();
    print();
    return 0;
    
}