
#include <stdio.h>

int main() {
    int num1, num2, gcd = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    if (gcd == 1) {
        printf("%d and %d are coprime numbers", num1, num2);
    } else {
        printf("%d and %d are not coprime numbers", num1, num2);
    }

    return 0;
}
