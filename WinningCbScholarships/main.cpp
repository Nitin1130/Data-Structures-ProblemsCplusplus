#include <iostream>

using namespace std;

 long long int maxScholarshipOffered(long long  n, long long  m , long long  x , long long y) {
     long long int start = 0;
     long long int end = n;
     long long int couponsOffered = 0;
     while(start <= end) {
         long long mid = (start + end) / 2;
         long long int couponsRequired = mid * x;
         long long int couponsAvailable = m + (n - mid) * y;
         if(couponsRequired <= couponsAvailable) {
             start = mid + 1;
             couponsOffered = mid;
         }
         else {
             end = mid - 1;
         }

     }
    return couponsOffered;
}
int main() {
    long long int n, m , x, y;
    cin >>  n >> m >> x >> y;
    cout << maxScholarshipOffered(n, m , x , y) << endl;
    return 0;
}
