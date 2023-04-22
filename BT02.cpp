#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Tim thay tai vi tri " << i << endl;
            return 0;
        }
    }
    cout << "Khong tim thay gia tri " << x << endl;
    return 0;
}
