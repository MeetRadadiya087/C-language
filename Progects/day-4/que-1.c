// Write a C program that calculates the sum of two numbers using the + operator. Input two numbers, add them, and print the result.
// Output : Enter two numbers: 5 3
// Sum: 8



#include <stdio.h>

int main()
{
        int num1,num2,sum;

        printf("Enter two integers: ");
    
        scanf("%d %d", &num1, &num2);
    
        sum = num1 + num2;      
    
        printf("%d + %d = %d", num1, num2, sum);
        
        return 0;

}