#include <stdio.h>

int main()
{
    int c[12]; // an integer array containing 12 elements
    int b[100], a[27]; // declaring multiple arrays
    int i = 5, j = 6, x;
    
    c[3] = 1000; // assigning a value to an array element
    c[i + j] = 50; // assigning value 50 to array element c[11]
    
    printf("The value of the fourth element is: %d\n", c[3]);
    printf("Sum of the first three elements is: %d\n", c[0] + c[1] + c[2]);
    
    x = c[11] / 2;
    printf("The value of x is: %d\n", x);
    
    printf("Enter a value for the first element: ");
    scanf("%d", &c[0]);
    printf("The value of the first element is: %d\n", c[0]);
    
    return 0;
}
