#include <iostream>
using namespace std;

class Queue {
private:
    int Queues[5]; // Array to store queue elements
    int front; // Front index of the queue
    int rear; // Rear index of the queue

public:
    Queue() {
        front = -1; // Initialize front to -1
        rear = -1; // Initialize rear to -1
    }

    void insert(int value) {
        if (rear == 4) {
            cout << "Queue is Full - Overflow Condition!" << endl;
        } else {
            if (front == -1)
                front = 0;
            rear++;
            Queues[rear] = value;
        }
    }

    void Delete() {
        if (front == -1) {
            cout << "Queue is Empty - Underflow Condition!" << endl;
        } else {
            cout << "Element Deleted from the Queue is : " << Queues[front] << endl;
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
        }
    }

    int Peek() {
        if (front == -1) {
            return 0; // Return 0 if queue is empty
        } else {
            return Queues[front]; // Return the front element
        }
    }

    void Display() {
        if (front == -1) {
            cout << "Queue is Empty!" << endl;
        } else {
            cout << "Elements in the Queue are : ";
            for (int i = front; i <= rear; i++) {
                cout << Queues[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q; // Create an instance of the Queue class

    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.insert(50);

    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();

    int y = q.Peek();

    if (y == 0) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "The Front Element of the Queue is " << y << endl;
    }

    q.Display();

    return 0;
}