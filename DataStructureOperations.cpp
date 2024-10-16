#include<iostream>
using namespace std;

class Node {
    public:
    int nodeData; 
    int nodeKey; 
    Node* nextNode; 

    Node () {
        nodeData = 0;
        nodeKey = 0;
        nextNode = NULL;
    }
    Node (int dataValue, int keyValue) { 
       nodeData = dataValue;
       nodeKey = keyValue;
       nextNode = NULL;
    }
};

class Stack {
    public:
    Node* stackTop; 
    Stack () {
        stackTop = NULL;
    }

   
    void push(int keyValue, int dataValue);
    void pop();
    void display();
    bool isEmpty();
    int peek();
    int count();
    void clearScreen();
};

int main() {
    Stack myStack; 
    int userOption, nodePosition, nodeDataValue, nodeKeyValue;
    do {
        cout << "What operation do you want to perform? Select Option Number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. Display()" << endl;
        cout << "4. isEmpty()" << endl;
        cout << "5. Peek()" << endl;
        cout << "6. Count()" << endl;
        cout << "7. Display()" << endl;
        cout << "8. Clear Screen" << endl;
        cin >> userOption;

        Node *newNode = new Node; 
        switch(userOption) {
            case 0:
                break;
            case 1:
                cout << "Enter key and value of the node to push back in the stack: ";
                cin >> nodeKeyValue >> nodeDataValue;
                newNode->nodeData = nodeDataValue;
                newNode->nodeKey = nodeKeyValue;
                // TO DO: implement push logic
                break;
            // TO DO: implement other cases
        }
    } while (userOption != 0);
    return 0;
}