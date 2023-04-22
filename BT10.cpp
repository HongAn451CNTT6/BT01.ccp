#include <iostream>
using namespace std;

int sumEvenRecursive(int arr[], int n) {
    // Base case
    if (n == 1) {
        return (arr[0] % 2 == 0) ? arr[0] : 0;
    }
    
    // Recursive case
    int sum = sumEvenRecursive(arr + 1, n - 1);
    return (arr[0] % 2 == 0) ? sum + arr[0] : sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumEvenRecursive(arr, n);
    cout << "Tong cac so chan trong mang la: " << sum << endl;
    return 0;
}
