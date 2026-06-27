#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    
    // Read the input integers a and b
    if (scanf("%d %d", &a, &b) != 2) return 0;

    // Array to store English representations of numbers 1-9
    char *words[] = {"one", "two", "three", "four", "five", 
                     "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the word corresponding to the number
            printf("%s\n", words[i - 1]);
        } else if (i > 9) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    
}