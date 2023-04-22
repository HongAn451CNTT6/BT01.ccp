#include <iostream>
using namespace std;

// Hàm tìm giá trị lớn nhất trong mảng
float findMax(float arr[], int size) {
    if (size == 1) {    // trường hợp cơ sở: mảng chỉ có một phần tử
        return arr[0];
    }
    else {
        float max = findMax(arr, size-1);    // gọi đệ quy với mảng có kích thước nhỏ hơn
        if (arr[size-1] > max) {    // so sánh phần tử cuối cùng của mảng với giá trị lớn nhất đã tìm được
            return arr[size-1];
        }
        else {
            return max;
        }
    }
}

int main() {
    float arr[] = {3.4, 5.7, -2.8, 4.1, 2.6, 8.9};
    int size = sizeof(arr)/sizeof(arr[0]);

    float max = findMax(arr, size);
    cout << "Gia tri lon nhat trong mang la: " << max;

    return 0;
}
