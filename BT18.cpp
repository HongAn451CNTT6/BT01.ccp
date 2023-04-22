#include <iostream>
using namespace std;

// Hàm kiểm tra tính chất "toàn giá trị âm" của mảng
bool isAllNegative(float arr[], int size) {
    if (size == 0) {    // trường hợp cơ sở: kích thước mảng là 0
        return true;
    }
    else if (arr[size-1] >= 0) {    // nếu phần tử cuối cùng của mảng không âm, không thỏa tính chất "toàn giá trị âm"
        return false;
    }
    else {
        return isAllNegative(arr, size-1);    // gọi đệ quy với mảng có kích thước nhỏ hơn
    }
}

int main() {
    float arr1[] = {-1.5, -2.0, -3.2, -4.0, -5.5, -6.1, -7.0};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    float arr2[] = {-1.5, -2.0, 3.2, -4.0, -5.5, -6.1, -7.0};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    if (isAllNegative(arr1, size1)) {
        cout << "Mang 1 thoa man tinh chat 'toan gia tri am'";
    }
    else {
        cout << "Mang 1 khong thoa man tinh chat 'toan gia tri am'";
    }

    if (isAllNegative(arr2, size2)) {
        cout << "Mang 2 thoa man tinh chat 'toan gia tri am'";
    }
    else {
        cout << "Mang 2 khong thoa man tinh chat 'toan gia tri am'";
    }

    return 0;
}
