#include <iostream>
using namespace std;

int countPositive(float arr[], int n) {
    // base case
    if (n == 0) {
        return 0;
    }

    // recursive case
    int count = countPositive(arr, n-1);  // đệ quy đến phần tử trước
    if (arr[n-1] > 0) {  // nếu phần tử cuối cùng là số dương
        count++;  // tăng số lượng lên 1
    }

    return count;
}

int main() {
    float arr[] = {1.5, -2.3, 4.6, -0.9, 5.0, -3.7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "So luong gia tri duong trong mang la: " << countPositive(arr, n);

    return 0;
}
