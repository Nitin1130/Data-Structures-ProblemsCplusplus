#include<bits/stdc++.h>
using namespace std;



int main() {
    int test;
    cin >> test;
    int n;
    while(test--) {
        cin >> n;
        priority_queue<int> leftHeap;
        priority_queue<int, vector<int>, greater<int>> rightHeap;
        int d;
        cin >> d;
        float med = d;
        cout << med << " ";
        leftHeap.push(d);
        n--;

        while(n--) {

            cin >> d; //in one iteration read only one input
           
          
            if(leftHeap.size() > rightHeap.size()) {
                if(d < med) {
                    rightHeap.push(leftHeap.top());
                    leftHeap.pop();
                    leftHeap.push(d);
                }
                else {
                    rightHeap.push(d);
                }
                  med = (leftHeap.top() + rightHeap.top()) / 2;//added
            }
            else if(leftHeap.size() == rightHeap.size()) {
                if(d < med) {
                    leftHeap.push(d);
                    med = leftHeap.top();
                }
                else {
                    rightHeap.push(d);
                    med = rightHeap.top();
                }
            }
            else {
                if(d > med) {
                    leftHeap.push(rightHeap.top());
                    rightHeap.pop();
                    rightHeap.push(d);
                }
                else {
                    leftHeap.push(d);
                }
                med = (leftHeap.top() + rightHeap.top()) / 2;
            }
            cout << med << " ";
          //  cin >> d;
        }
        cout<<"\n";
    }
    return 0;
}