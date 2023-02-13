
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, num_digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding the number of digits in the given number
    temp = num;
    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }

    // Checking if the given number is an Armstrong number
    temp = num;
    while (temp != 0) {
        sum += pow(temp % 10, num_digits);
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number", num);
    } else {
        printf("%d is not an Armstrong number", num);
    }

    return 0;
}
