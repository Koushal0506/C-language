#include <stdio.h>

int main() {
    int num, temp, rev = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if(temp == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}

