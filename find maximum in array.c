#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 1, 7};
    int max = arr[0], i;
    for(i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Max is %d\n", max);
    return 0;
}

