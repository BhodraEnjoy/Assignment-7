
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum, num_digits;
    printf("Armstrong numbers under 1000: ");

    // Checking for Armstrong numbers
    for (int i = 0; i < 1000; i++) {
        temp = i;
        sum = 0;
        num_digits = 0;

        // Finding the number of digits in the current number
        while (temp != 0) {
            num_digits++;
            temp /= 10;
        }

        // Checking if the current number is an Armstrong number
        temp = i;
        while (temp != 0) {
            sum += pow(temp % 10, num_digits);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
