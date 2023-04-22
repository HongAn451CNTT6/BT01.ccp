#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
8/Viết chương trình cài đặt stack bằng mảng. Nhập vào stack 6 phần tử { 41, 23, 4, 14, 56, 1 }. Sau đó xuất giá trị top ra khỏi stack và in các phần tử trong stack còn lại.
Giải:
#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
  int top;
  int arr[MAX_SIZE];
public:
  Stack() {
    top = -1;
  }

  bool isEmpty() {
    return top == -1;
  }

  bool isFull() {
    return top == MAX_SIZE - 1;
  }

  void push(int val) {
    if (isFull()) {
      cout << "Stack is full. Cannot push value " << val << endl;
      return;
    }
    arr[++top] = val;
    cout << "Pushed value " << val << " into stack" << endl;
  }

  int pop() {
    if (isEmpty()) {
      cout << "Stack is empty. Cannot pop." << endl;
      return -1;
    }
    int val = arr[top--];
    cout << "Popped value " << val << " from stack" << endl;
    return val;
  }

  int peek() {
    if (isEmpty()) {
      cout << "Stack is empty. Cannot peek." << endl;
      return -1;
    }
    return arr[top];
  }

  void printStack() {
    if (isEmpty()) {
      cout << "Stack is empty." << endl;
      return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Stack s;
  int arr[6] = {41, 23, 4, 14, 56, 1};
  for (int i = 0; i < 6; i++) {
    s.push(arr[i]);
  }

  int poppedValue = s.pop();
  cout << "Top element of stack: " << s.peek() << endl;
  s.printStack();

  return 0;
}
