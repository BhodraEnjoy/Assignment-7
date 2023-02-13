#include<stdio.h>

int main()
{
    int num, a =0, b = 1, c = 0;
    printf("Enter your number : ");
    scanf("%d", &num);

    for(int i =2 ; i <= num; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    printf("The %d number is %d", num,a);

    return 0;
}

