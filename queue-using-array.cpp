#include<iostream>
using namespace std;

class queue {
public:
    int front, rear, maxsize;
    int* arr;

    queue(int size) {
        maxsize = size;
        arr = new int[maxsize];
        front = -1;
        rear = -1;
    }

    ~queue() {
        delete[] arr;
    }

    bool isempty() {
        return front == -1 && rear == -1;
    }

    bool isfull() {
        return (rear + 1) % maxsize == front;
    }

    void enqueue(int value) {
        if (isfull()) {
            cout << "Queue is full";
        }
        else {
            rear = (rear + 1) % maxsize;
            arr[rear] = value;
            if (front == -1) {
                front = rear; // If this is the first element, set front as well
            }
        }
    }

    void dequeue() {
        if (isempty()) {
            cout << "Queue is empty";
        }
        else {
            cout << "Item dequeue: " << arr[front] << endl;
            if (front == rear) {
                front = rear = -1; // If there's only one element, reset front and rear
            }
            else {
                front = (front + 1) % maxsize;
            }
        }
    }

    void front2() {
        if (isempty()) {
            cout << "Queue is empty";
        }
        else {
            cout << "Front: " << arr[front];
        }
    }

    void rear2() {
        if (isempty()) {
            cout << "Queue is empty";
        }
        else {
            cout << "Rear: " << arr[rear];
        }
    }

    void size() {
        if (isempty()) {
            cout << "Queue is empty";
        }
        else {
            cout << "Size of queue: " << (rear - front + maxsize) % maxsize;
        }
    }

    void display() {
        if (isempty()) {
            cout << "Queue is empty";
        }
        else {
            cout << "Queue: ";
            for (int i = front; i != rear; i = (i + 1) % maxsize) {
                cout << arr[i] << " ";
            }
            cout << arr[rear] << endl;
        }
    }
};

int main() {
    queue q(20);
    int ch, value;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Front" << endl;
    cout << "4. Rear" << endl;
    cout << "5. Size" << endl;
    cout << "6. Display" << endl;
    cout << "7. Exit" << endl;

    do {
        cout <<endl<< "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter element to be inserted: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.front2();
                break;
            case 4:
                q.rear2();
                break;
            case 5:
                q.size();
                break;
            case 6:
                q.display();
                break;
            case 7:
                exit(0);
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (ch != 7);

    return 0;
}
