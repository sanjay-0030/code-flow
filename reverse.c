#include <stdio.h>

int main()
{
    int num, rev = 0, digit, original, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // Save the original number

    // Reverse the number
    while (num > 0){
        digit = num % 10;        // Get the last digit
        rev = rev * 10 + digit;  // Add the digit to the reversed number
        num = num / 10;          // Remove the last digit
    }

    // Find the sum
    sum = original + rev;

    printf("Original Number = %d\n", original);
    printf("Reversed Number = %d\n", rev);
    printf("Sum = %d\n", sum);

    return 0;
}
