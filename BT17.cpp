#include <iostream>
using namespace std;

// Hàm tính tổng các giá trị trong mảng
float sum(float arr[], int size) {
    if (size == 0) {    // trường hợp cơ sở: kích thước mảng là 0
        return 0;
    }
    else {
        return arr[size-1] + sum(arr, size-1);    // gọi đệ quy với mảng có kích thước nhỏ hơn
    }
}

int main() {
    float arr[] = {1.5, -2.0, 3.2, 4.0, -5.5, 6.1, 7.0};
    int size = sizeof(arr)/sizeof(arr[0]);

    float s = sum(arr, size);
    cout << "Tong cac gia tri trong mang la: " << s;

    return 0;
}
