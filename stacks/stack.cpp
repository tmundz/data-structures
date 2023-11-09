#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
  int top;
  int arr[5];

public:
  Stack() {
    top = -1;
    for (int i = 0; i < 5; i++) {
      arr[i] = 0;
    }
  }
  bool is_empty() {
    if (top == -1) {
      return true;
    }
    return false;
  }

  bool is_full() {
    if (top == 4) {
      return true;
    }
    return false;
  }

  void push(int val) {
    if (is_full()) {
      cout << "stack overflow" << endl;
      return;
    }
    top++;
    arr[top] = val;
  }

  int pop() {
    if (is_empty()) {
      cout << "stack is empty" << endl;
      return 0;
    }
    int val = arr[top];
    arr[top] = 0;
    top--;

    return val;
  }

  int count() { return (top + 1); }
  int peek(int i) {
    if (is_empty()) {
      cout << "stack is empty" << endl;
      return 0;
    }
    if (i > top) {
      cout << "index does not exist" << endl;
      return 0;
    }
    return arr[i];
  }
};

int main() {
  Stack st = Stack();
  st.pop();
  st.push(1);
  cout << "Pushed: " << 1 << endl;

  st.push(2);
  cout << "Pushed: " << 2 << endl;

  st.push(3);
  cout << "Pushed: " << 3 << endl;

  cout << "find 2: " << st.peek(2) << endl;
  st.push(4);
  cout << "Pushed: " << 4 << endl;

  cout << "find 4: " << st.peek(4) << endl;
  cout << "find 10: " << st.peek(10) << endl;
  st.push(5);
  cout << "Pushed: " << 5 << endl;

  st.push(6);
  cout << "Pushed: " << 6 << endl;

  cout << "Popped: " << st.pop() << endl;
  cout << "Popped: " << st.pop() << endl;
  cout << "Popped: " << st.pop() << endl;
  cout << "Popped: " << st.pop() << endl;
  cout << "Popped: " << st.pop() << endl;

  return 0;
}
// pop
// push
// is_empty
// isfull
// change
// count
// peek
// display
