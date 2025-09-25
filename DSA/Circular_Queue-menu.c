#include <stdio.h>
#define size 10

int arr[size];
int front = -1, rear = -1;

int isFull() {
    return (front == 0 && rear == size - 1) ;
}

int isEmpty() {
    return (front == -1 && rear == -1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is FULL\n");
    } else {
        if (front == -1)
            front = rear = 0;
        else
            rear = (rear + 1) % size;
        arr[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is EMPTY\n");
    } else {
        printf("Dequeued: %d\n", arr[front]);
        if (front == rear) 
            front = rear = -1;
        else
            front = (front + 1) % size;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is EMPTY\n");
    } else {
        printf("Queue elements : ");
        int i = front;
        while (1) {
            printf("%d ", arr[i]);
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        printf("\n");
    }
}

int main() {
    int ch, value;

    do {
        printf("\n***** Circular Queue Menu *****\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice Try again\n");
        }
    } while (ch != 4);

    return 0;
}
