#include <bits/stdc++.h>
using namespace std;
class abc {
    public:
        int freq, num;
        abc(int freq, int num) {
            this->freq = freq;
            this->num = num;
        }
};

class functor {
    public: 
        bool operator()(abc x1, abc x2){
            if(x1.freq == x2.freq) {
                return x1.num > x2.num;
            }
            else{
                return x1.freq < x2.freq;
            }
        }
};

int main() {
    int t;
    int n, k;
    cin >> t;
    int *arr;
    while(t--) {
        priority_queue<abc, vector<abc>,functor> pq;   
        cin >> n >> k;
        arr = new int[n];
        int newNum;
        int count[100] = {0};
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for(int i = 0; i < n;i++) {
            count[arr[i]]++;
            newNum = k;
            for(int j = 0; j <= i; j++) {
                abc y(count[arr[j]], arr[j]);
                pq.push(y);
            }
            while(!pq.empty() && newNum--) {
                abc yy = pq.top();
                cout << yy.num << " ";
                int list1 = yy.freq;
                while(list1--) {
                    pq.pop();
                }
            }
            while(!pq.empty()) {
                pq.pop();

            }
        }
        cout << endl;
    }
    return 0;
}