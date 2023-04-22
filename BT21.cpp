#include <iostream>
using namespace std;

int T(int n) {
   if(n == 1) { // n = 1, trả về 1
      return 1;
   } else { // n > 1, tính T(n) = n x T(n-1)
      return n * T(n-1);
   }
}

int main() {
   int n;
   cout << "Nhap n: ";
   cin >> n;
   cout << "T(" << n << ") = " << T(n) << endl;
   return 0;
}
