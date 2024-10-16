//INSERTION AT THE BOTTOM

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottomOfStack(stack<int> &inputStack, int newValue) {
  stack<int> temporaryStack;
  while(!inputStack.empty()) {
    int topElement = inputStack.top();
    inputStack.pop();
    temporaryStack.push(topElement);
  }
  inputStack.push(newValue);
  while(!temporaryStack.empty()) {
    int topElement = temporaryStack.top();
    temporaryStack.pop();
    inputStack.push(topElement);
  }
}

int main() {
  stack<int> myStack;
  myStack.push(1);
  myStack.push(2);
  myStack.push(3);
  myStack.push(4);
  insertAtBottomOfStack(myStack, 100);
  while(!myStack.empty()) {
    int topElement = myStack.top();
    myStack.pop();
    cout << topElement << endl;
  }
  return 0; // added return statement to main()
}