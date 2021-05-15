#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int Q, k;
    cin >> Q >> k;
    int queryType, x, y;
    priority_queue<int> pq;
    while(Q--) {
        cin >> queryType;
        if(queryType == 2) {
            // if(pq.size() > k) { put it in else
            //     pq.pop();
            // }
            cout << pq.top() << endl;
        }
        else {
            cin >> x >> y;
            int sum = pow(x,2) + pow(y,2);
            pq.push(sum);
			  if(pq.size() > k) { //always maintain heap size <=k
                pq.pop();
            }
        }
    }
    return 0;
}
