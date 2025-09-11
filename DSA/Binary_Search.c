#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key, i;

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            break;
        }
    }

    if(i == 5) {
        printf("Not found\n");
    }

    return 0;
}
