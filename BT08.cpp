include <iostream>
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

