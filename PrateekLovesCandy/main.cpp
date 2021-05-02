#include <iostream>
#include <vector>
using namespace std;
#define ll long long
vector<int>  primeSieve(int *p, int n) {
    //special case
    p[2] = 1;
    p[1] = p[0] = 0;
    //first mark all odd number's prime
    for(int i = 3; i  <= n; i+=2) {
        p[i] = 1;
    }
    //sieve
    for(int  i = 3; i <= n; i+=2) {
        //if the current number is not marked (it is prime)
        if(p[i] == 1) {
            // mark all the multiples of i as not prime
            for(int j = i * i; j <= 1000000; j = j + i) {
                p[j] = 0;
            }
        }
    }
    vector<int> primes;
    primes.push_back(2);
    for(int i = 3; i <= n; i += 2) {
        if(p[i] == 1) {
            primes.push_back(i);
        }
    }
    return primes;

}
int main() {
    int N = 1000000;
    int p[N];
    for(int i = 0 ; i < N; i++) {
        p[i] = 0;
    }
    vector<int> primes = primeSieve(p, 100);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << primes.at(n - 1) << endl;
    }
    return 0;
}
