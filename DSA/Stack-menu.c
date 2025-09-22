#include<stdio.h>
#define size 10
int tos = -1;
int stack[size];
int isFull(){
    return tos == size -1;
}

int isEmpty(){
    return tos == -1;
}

void push(int value){
   if( isFull()){
    printf("Stack is full");
   }
   else{
    stack[++tos]=value;
    printf("Succesfully push..\n");
   }
}

void pop(){
    if( isEmpty()){
        printf("Stack is empty\n");
    }
    else{
        printf("Successfully poped: %d\n",stack[tos--]);
    }
}

void peek(){
    if(isEmpty()){
        printf("Stack is empty\n");
    }
    else{
        printf("Succesfully peek: %d",stack[tos]);
    }
}

void display(){
    if(isEmpty()){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack element is: ");
        for(int i=0; i<=tos; i++){
            printf("%d\t",stack[i]);
        
        }
    }
}

int main(){
    int choice, value;
    do {
    printf("\nStack MENU is...\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice){
        case 1:
        printf("Enter a push value: ");
        scanf("%d",&value);
        push(value);
        break;

        case 2:
        pop();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;

        case 5:
        return 0;

        default:
        printf("Invalid Choic....");
    }
    }
    while (choice != 5);

}
