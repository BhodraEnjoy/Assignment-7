
#include <stdio.h>

int main() {
    int is_prime;
    printf("Prime numbers under 100: ");

    // Checking for prime numbers
    for (int i = 2; i < 100; i++) {
        is_prime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
