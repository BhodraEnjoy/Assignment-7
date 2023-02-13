#include <stdio.h>

int main() {
    int num, next_prime, is_prime;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding next prime number
    next_prime = num + 1;
    while (1) {
        is_prime = 1;
        for (int i = 2; i <= next_prime/2; i++) {
            if (next_prime % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("Next prime number after %d is %d", num, next_prime);
            break;
        }
        next_prime++;
    }

    return 0;
}
