#include <stdio.h>

float sumPositive(float arr[], int size) {
    if (size == 0) {    // trường hợp cơ sở: kích thước mảng là 0
        return 0;
    }
    else {
        float sum = sumPositive(arr, size-1);    // gọi đệ quy với mảng có kích thước nhỏ hơn
        if (arr[size-1] > 0) {    // nếu phần tử hiện tại lớn hơn 0, thì cộng vào tổng
            sum += arr[size-1];
        }
        return sum;
    }
}

int main() {
    float arr[] = {1.5, -2.0, 3.2, 4.0, -5.5, 6.1, 7.0};
    int size = sizeof(arr)/sizeof(arr[0]);

    float sum = sumPositive(arr, size);
    printf("Tong cac gia tri duong trong mang la: %f", sum);

    return 0;
}
