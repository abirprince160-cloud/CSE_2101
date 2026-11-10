
#include <iostream> 
using namespace std;
#define max 5

int arr[max], front = 0, rear = -1, totalItem = 0;

bool isFull() {
    return totalItem == max;
}

bool isEmpty() {
    return totalItem == 0;
}

void enqueue(int item) {
    if (isFull()) {
        cout << "Queue is full!\n";
        return;
    }
    rear = (rear + 1) % max;
    arr[rear] = item;
    totalItem++;
}

int dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
        return -1;
    }
    int frontItem = arr[front];
    front = (front + 1) % max;
    totalItem--;
    return frontItem;
}

void printQueue() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
        return;
    }
    cout << "Queue: ";
    for (int i = 0; i < totalItem; i++) {
        cout << arr[(front + i) % max] << " ";
    }
    cout << "\n";
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    printQueue();

    dequeue();
    cout<<"After dequeue:"<<endl;
    printQueue();

    enqueue(60);
    cout<<"After again enqueue:"<<endl;
    printQueue();

    return 0;
}