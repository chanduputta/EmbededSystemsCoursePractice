#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum of all numbers: %d\n", sum);

    return 0;
}
