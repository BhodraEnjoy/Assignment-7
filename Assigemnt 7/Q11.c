
#include <stdio.h>

int main() {
    int num, position = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding the position of the first 1 in LSB
    while (1) {
        if (num & 1) {
            printf("The position of the first 1 in LSB is %d", position);
            break;
        }
        num >>= 1;
        position++;
    }

    return 0;
}
