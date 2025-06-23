
#include <stdio.h>
int main() {
    int num, original, rem, result = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    original = num;
    while(original != 0) {
        rem = original % 10;
        result += rem * rem * rem;
        original /= 10;
    }
    if(result == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
