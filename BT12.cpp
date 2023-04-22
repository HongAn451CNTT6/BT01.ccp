#include <iostream>
using namespace std;

// Hàm đệ quy xuất mảng
void xuatMang(int arr[], int n, int index) {
    // Nếu chỉ số phần tử hiện tại lớn hơn hoặc bằng số lượng phần tử trong mảng, dừng đệ quy
    if (index >= n) {
        return;
    }
    
    // Xuất giá trị phần tử hiện tại
    cout << arr[index] << " ";
    
    // Gọi đệ quy để xuất phần tử tiếp theo
    xuatMang(arr, n, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Mang: ";
    xuatMang(arr, n, 0); // Gọi hàm đệ quy để xuất mảng

    return 0;
}
