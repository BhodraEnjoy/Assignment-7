
#include <stdio.h>

int main() {
    int start_num, end_num, is_prime;
    printf("Enter two numbers: ");
    scanf("%d %d", &start_num, &end_num);

    printf("Prime numbers between %d and %d: ", start_num, end_num);

    // Checking for prime numbers
    for (int i = start_num; i <= end_num; i++) {
        if (i <= 1) {
            continue;  // Skipping numbers less than or equal to 1
        }
        is_prime = 1;
        for (int j = 2; j <= i/2; j++) {
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


