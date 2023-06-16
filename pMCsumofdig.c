#include <stdio.h>

int cal(int *num);

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = cal(&num); 
    printf("Sum of digits of %d is: %d\n", num, sum);
    return 0;
}

int cal(int *num) 
{
    int sum = 0;
    int digit;
    while (*num != 0) {
        digit = *num % 10; 
        sum += digit; 
        *num /= 10;
    }
    return sum;
}