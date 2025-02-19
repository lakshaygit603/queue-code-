#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0;  // This handles the first enqueue
        }
        queue[++rear] = value;  // Increment rear before assigning the value
        printf("%d enqueued into the queue\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow! Cannot dequeue\n");
    } else {
        printf("%d dequeued from the queue\n", queue[front++]);
        if (front > rear) {
            front = rear = -1;  // Reset the queue when it's empty
        }
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element is %d\n", queue[front]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    peek();
    dequeue();
    dequeue();
    display();
    peek();
    return 0;
}
     
    



