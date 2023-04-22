#include <iostream>
using namespace std;

// Hàm hoán đổi giá trị của hai biến
void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

// Hàm đệ quy sắp xếp mảng tăng dần
void sortArray(float arr[], int size) {
    if (size <= 1) {    // trường hợp cơ sở: mảng chỉ có một phần tử hoặc không có phần tử nào
        return;
    }
    else {
        sortArray(arr, size-1);    // sắp xếp đệ quy mảng trừ phần tử cuối cùng
        if (arr[size-1] < arr[size-2]) {    // so sánh phần tử cuối cùng với phần tử liền trước
            swap(arr[size-1], arr[size-2]);    // nếu phần tử cuối cùng nhỏ hơn phần tử liền trước, hoán đổi chúng
            sortArray(arr, size-1);    // sau khi hoán đổi, tiếp tục sắp xếp đệ quy mảng trừ phần tử cuối cùng
        }
    }
}

int main() {
    float arr[] = {3.4, 5.7, -2.8, 4.1, 2.6, 8.9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    sortArray(arr, size);

    cout << "\nMang sau khi sap xep: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
