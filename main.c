#include <stdio.h>

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation: ");
    decimalToBinary(num);
    printf("\n");
    return 0;
}

void decimalToBinary(int num) {
    if (num > 0) {
        decimalToBinary(num / 2);
        printf("%d", num % 2);
    }
    return 0;
}
