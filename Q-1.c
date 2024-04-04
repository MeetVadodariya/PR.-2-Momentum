//Q.1 Write a Program to check whether a number is even or odd using the ternary operator.

#include <stdio.h>

main() {
    int num;
    
    printf("Enter any number : ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("%d number is even.\n", num) : printf("%d number is odd.\n", num);
    
}
