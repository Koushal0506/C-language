#include <stdio.h>
#define size 10

int queue[size];
int tos = -1, head = -1;

int isFull()
{
    if (head == size - 1)
        return 1;
    else
        return 0;
}


void enQueue(int ele)
{
    if (isFull())
    {
        printf("\nQueue is full (Overflow)");
    }
    else
    {
        if (tos == -1) // first element being inserted
            tos = 0;
        head++;
        queue[head] = ele;
    }
}


int isEmpty()
{
    if (tos == -1 && head == -1)
        return 1;
    else
        return 0;
}


int deQueue()
{
    if (isEmpty())
        return -1;
    
    int dequeued_element = queue[tos];
    
    if (tos == head) // only one element was present
        tos = head = -1;
    else
        tos++;
    
    return dequeued_element;
}


int peek()
{
    if (isEmpty())
        return -1;
    else
        return queue[tos];
}


int count()
{
    if (isEmpty())
        return 0;
    return (head - tos + 1);
}


void printQueue()
{
    if (isEmpty())
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue elements (front to rear):\n");
        for (int i = tos; i <= head; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}

int main()
{
    int ele, ch, choice;
    int dequeued_element;

    do
    {
        printf("\n\n--- Queue Menu ---");
        printf("\n1. enQueue");
        printf("\n2. deQueue");
        printf("\n3. Peek");
        printf("\n4. Count");
        printf("\n5. Print");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter element to enqueue: ");
            scanf("%d", &ele);
            enQueue(ele);
            break;

        case 2:
            dequeued_element = deQueue();
            if (dequeued_element == -1)
                printf("\nQueue is empty (Underflow)!");
            else
                printf("\nDequeued element is %d", dequeued_element);
            break;

        case 3:
            dequeued_element = peek();
            if (dequeued_element == -1)
                printf("\nQueue is empty");
            else
                printf("\nPeek element is %d", dequeued_element);
            break;

        case 4:
            printf("\nNumber of elements in Queue: %d", count());
            break;

        case 5:
            printQueue();
            break;

        case 6:
            return 0;

        default:
            printf("\nEnter valid choice!");
        }

        printf("\n\nDo you want to continue (1 = Yes / 0 = No)? ");
        scanf("%d", &choice);

    } while (choice != 0);

    return 0;
}
